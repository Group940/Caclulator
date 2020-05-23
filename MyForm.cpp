#include "MyForm.h"
#include < stdio.h >
#include < stdlib.h >
#include < vcclr.h >
#include "Convert_and_calculate.h"
#include <string.h>
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace msclr::interop;

bool m;
int test;
int test1;
int krinhz;
int krinhz1;
int itera;
int itera1;
int ToDenarySS;
int ToAnySS;


[STAThreadAttribute]
int main(cli::array < String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	Practice::MyForm form;
	Application::Run(% form);
	
}

System::Void Practice::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	msclr::interop::marshal_context context;
	ToDenarySS = Convert::ToInt32(numericUpDownInput->Value);
	ToAnySS = Convert::ToInt32(numericUpDownOutput->Value);
	String^ S = textBoxInput->Text;
	string s = context.marshal_as<std::string>(S);
	char output[80] = { 0 };//Строка для вывода результата
	char input[80] = { 0 };
	strcpy(input, s.c_str());
	

	
	double dec_number = fromAnyToDenary(input, ToDenarySS);
	fromDenaryToAny(ToAnySS, output, fabs(dec_number));

	s = string(output);
	String^ str = marshal_as<String^>(s);
	if (dec_number > 0)
	{
		textBoxOutput->Text = str;
	}
	else
	{
		String^ minus = "-";
		str = minus + str;
		textBoxOutput->Text = str;
	}
	

	return System::Void();
}

System::Void Practice::MyForm::textBoxInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if ((e->KeyChar < 48 || e->KeyChar > (57 - test)) && !((e->KeyChar == ',') && (textBoxInput->Text->IndexOf(",") == -1) && (textBoxInput->Text->Length != 0)) && (e->KeyChar < krinhz || e->KeyChar >krinhz + itera) && !((e->KeyChar == '-') && (textBoxInput->Text->IndexOf("-") == -1 && textBoxInput->SelectionStart == 0)))
	{
		if (e->KeyChar != (char)Keys::Back) e->Handled = true;
	}

	
		
	return System::Void();
}

System::Void Practice::MyForm::textBox_secondnumber_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if ((e->KeyChar < 48 || e->KeyChar >(57 - test1)) && !((e->KeyChar == ',') && (textBox_secondnumber->Text->IndexOf(",") == -1) && (textBox_secondnumber->Text->Length != 0)) && (e->KeyChar < krinhz1 || e->KeyChar >krinhz1 + itera1) && !((e->KeyChar == '-') && (textBox_secondnumber->Text->IndexOf("-") == -1 && textBox_secondnumber->SelectionStart == 0)))
	{
		if (e->KeyChar != (char)Keys::Back) e->Handled = true;
	}
	return System::Void();
}

System::Void Practice::MyForm::numericUpDownInput_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	textBoxInput->Text = "";
	return System::Void();
}

System::Void Practice::MyForm::numericUpDownOutput_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	textBox_secondnumber->Text = "";
	return System::Void();
}



System::Void Practice::MyForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	int t = Convert::ToInt32(numericUpDownInput->Value);
	if (t < 11)
	{
		test = 10 - t;
		krinhz = 0;
		itera = 0;
	}
	else
	{
		test = 0;
		krinhz = 65;
		itera = t - 11;
	}

	int b = Convert::ToInt32(numericUpDownOutput->Value);
	if (b < 11)
	{
		test1 = 10 - b;
		krinhz1 = 0;
		itera1 = 0;
	}
	else
	{
		test1 = 0;
		krinhz1 = 65;
		itera1 = b - 11;
	}
	
	return System::Void();
}

System::Void Practice::MyForm::checkBox_Plus_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox_Perevod->Checked = false;
	checkBox_Plus->Checked = true;
	checkBox_Minus->Checked = false;
	textBoxInput->Text = "";
	textBoxOutput->Text = "";
	textBoxOutput->Text = "";
	numericUpDownInput->Value = 2;
	numericUpDownOutput->Value = 2;
	numericUpDown_result_Plus->Value = 2;
	this->numericUpDownOutput->Location = System::Drawing::Point(548, 119);

	label1_secondnumber->Visible = true;
	label_firstnumber->Visible = true;
	textBox_secondnumber->Visible = true;
	numericUpDown_result_Plus->Visible = true;
	button_plus->Visible = true;
	button_Minus->Visible = false;

	labelNumber_PerevodIn->Visible = false;
	labelNumber_PerevodTo->Visible = false;
	labelNumber_Perevod_In->Visible = false;	
	buttonPerevod->Visible = false;

	return System::Void();
}

System::Void Practice::MyForm::checkBox_Perevod_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox_Perevod->Checked = true;
	checkBox_Plus->Checked = false;
	checkBox_Minus->Checked = false;
	textBoxInput->Text = "";
	textBoxOutput->Text = "";
	this->numericUpDownOutput->Location = System::Drawing::Point(425, 119);

	label1_secondnumber->Visible = false;
	label_firstnumber->Visible = false;
	textBox_secondnumber->Visible = false;
	numericUpDown_result_Plus->Visible = false;
	button_plus->Visible = false;
	button_Minus->Visible = false;

	labelNumber_PerevodIn->Visible = true;
	labelNumber_PerevodTo->Visible = true;
	labelNumber_Perevod_In->Visible = true;
	labelPerevod_Result->Visible = true;
	textBoxInput->Visible = true;
	textBoxOutput->Visible = true;
	numericUpDownInput->Visible = true;
	numericUpDownOutput->Visible = true;
	buttonPerevod->Visible = true;


	return System::Void();
}

System::Void Practice::MyForm::button_plus_Click(System::Object^ sender, System::EventArgs^ e)
{
	msclr::interop::marshal_context context;
	int s1 = Convert::ToInt32(numericUpDownInput->Value);
	int s2 = Convert::ToInt32(numericUpDownOutput->Value);
	int s3 = Convert::ToInt32(numericUpDown_result_Plus->Value);
	String^ Str = textBoxInput->Text;
	string str = context.marshal_as<std::string>(Str);
	String^ Str1 = textBox_secondnumber->Text;
	string str1 = context.marshal_as<std::string>(Str1);
	char Output[80] = { 0 };
	char Input[80] = { 0 };
	strcpy(Input, str.c_str());
	strcpy(Output, str1.c_str());
	char output[80] = { 0 };

	double result = Plus(Input, Output, s1, s2, s3, output);

	string s = string(output);
	String^ S = marshal_as<String^>(s);
	if (result > 0)
	{
		textBoxOutput->Text = S;
	}
	else
	{
		String^ Minus = "-";
		S = Minus + S;
		textBoxOutput->Text = S;
	}


	return System::Void();
}


System::Void Practice::MyForm::button_Minus_Click(System::Object^ sender, System::EventArgs^ e)
{
	msclr::interop::marshal_context context;
	int s1 = Convert::ToInt32(numericUpDownInput->Value);
	int s2 = Convert::ToInt32(numericUpDownOutput->Value);
	int s3 = Convert::ToInt32(numericUpDown_result_Plus->Value);
	String^ Str = textBoxInput->Text;
	string str = context.marshal_as<std::string>(Str);
	String^ Str1 = textBox_secondnumber->Text;
	string str1 = context.marshal_as<std::string>(Str1);
	char Output[80] = { 0 };
	char Input[80] = { 0 };
	strcpy(Input, str.c_str());
	strcpy(Output, str1.c_str());
	char output[80] = { 0 };

	double result = Minus(Input, Output, s1, s2, s3, output);

	string s = string(output);
	String^ S = marshal_as<String^>(s);
	if (result > 0)
	{
		textBoxOutput->Text = S;
	}
	else
	{
		String^ Minus = "-";
		S = Minus + S;
		textBoxOutput->Text = S;
	}
	return System::Void();
}

System::Void Practice::MyForm::checkBox_Minus_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox_Perevod->Checked = false;
	checkBox_Plus->Checked = false;
	checkBox_Minus->Checked = true;

	textBoxInput->Text = "";
	textBoxOutput->Text = "";
	textBoxOutput->Text = "";
	numericUpDownInput->Value = 2;
	numericUpDownOutput->Value = 2;
	numericUpDown_result_Plus->Value = 2;
	this->numericUpDownOutput->Location = System::Drawing::Point(548, 119);

	label1_secondnumber->Visible = true;
	label_firstnumber->Visible = true;
	textBox_secondnumber->Visible = true;
	numericUpDown_result_Plus->Visible = true;
	button_plus->Visible = false;
	button_Minus->Visible = true;

	labelNumber_PerevodIn->Visible = false;
	labelNumber_PerevodTo->Visible = false;
	labelNumber_Perevod_In->Visible = false;
	buttonPerevod->Visible = false;
	return System::Void();
}
