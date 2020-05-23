#pragma once

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxInput;
	protected:

	private: System::Windows::Forms::TextBox^ textBoxOutput;
	private: System::Windows::Forms::Button^ buttonPerevod;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownInput;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownOutput;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ labelNumber_PerevodTo;
	private: System::Windows::Forms::Label^ labelNumber_PerevodIn;
	private: System::Windows::Forms::Label^ labelPerevod_Result;
	private: System::Windows::Forms::Label^ labelNumber_Perevod_In;
	private: System::Windows::Forms::CheckBox^ checkBox_Perevod;
	private: System::Windows::Forms::GroupBox^ groupBox_Perevod;
	private: System::Windows::Forms::GroupBox^ groupBox_;
	private: System::Windows::Forms::CheckBox^ checkBox_Plus;
	private: System::Windows::Forms::Label^ label_firstnumber;
	private: System::Windows::Forms::Label^ label1_secondnumber;
	private: System::Windows::Forms::TextBox^ textBox_secondnumber;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_result_Plus;
	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ checkBox_Minus;
	private: System::Windows::Forms::Button^ button_Minus;
















	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBoxInput = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOutput = (gcnew System::Windows::Forms::TextBox());
			this->buttonPerevod = (gcnew System::Windows::Forms::Button());
			this->numericUpDownInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownOutput = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelNumber_PerevodTo = (gcnew System::Windows::Forms::Label());
			this->labelNumber_PerevodIn = (gcnew System::Windows::Forms::Label());
			this->labelPerevod_Result = (gcnew System::Windows::Forms::Label());
			this->labelNumber_Perevod_In = (gcnew System::Windows::Forms::Label());
			this->checkBox_Perevod = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox_Perevod = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_ = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_Plus = (gcnew System::Windows::Forms::CheckBox());
			this->label_firstnumber = (gcnew System::Windows::Forms::Label());
			this->label1_secondnumber = (gcnew System::Windows::Forms::Label());
			this->textBox_secondnumber = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown_result_Plus = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_Minus = (gcnew System::Windows::Forms::CheckBox());
			this->button_Minus = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownOutput))->BeginInit();
			this->groupBox_Perevod->SuspendLayout();
			this->groupBox_->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_result_Plus))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxInput
			// 
			this->textBoxInput->ForeColor = System::Drawing::Color::Black;
			this->textBoxInput->Location = System::Drawing::Point(28, 119);
			this->textBoxInput->Name = L"textBoxInput";
			this->textBoxInput->Size = System::Drawing::Size(173, 20);
			this->textBoxInput->TabIndex = 0;
			this->textBoxInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxInput_KeyPress);
			// 
			// textBoxOutput
			// 
			this->textBoxOutput->Location = System::Drawing::Point(239, 262);
			this->textBoxOutput->Name = L"textBoxOutput";
			this->textBoxOutput->ReadOnly = true;
			this->textBoxOutput->Size = System::Drawing::Size(173, 20);
			this->textBoxOutput->TabIndex = 1;
			// 
			// buttonPerevod
			// 
			this->buttonPerevod->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPerevod->Location = System::Drawing::Point(247, 176);
			this->buttonPerevod->Name = L"buttonPerevod";
			this->buttonPerevod->Size = System::Drawing::Size(156, 45);
			this->buttonPerevod->TabIndex = 2;
			this->buttonPerevod->Text = L"Выполнить";
			this->buttonPerevod->UseVisualStyleBackColor = true;
			this->buttonPerevod->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// numericUpDownInput
			// 
			this->numericUpDownInput->Location = System::Drawing::Point(207, 119);
			this->numericUpDownInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			this->numericUpDownInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDownInput->Name = L"numericUpDownInput";
			this->numericUpDownInput->Size = System::Drawing::Size(41, 20);
			this->numericUpDownInput->TabIndex = 3;
			this->numericUpDownInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDownInput->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownInput_ValueChanged);
			// 
			// numericUpDownOutput
			// 
			this->numericUpDownOutput->Location = System::Drawing::Point(419, 119);
			this->numericUpDownOutput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			this->numericUpDownOutput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDownOutput->Name = L"numericUpDownOutput";
			this->numericUpDownOutput->Size = System::Drawing::Size(41, 20);
			this->numericUpDownOutput->TabIndex = 4;
			this->numericUpDownOutput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDownOutput->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownOutput_ValueChanged);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// labelNumber_PerevodTo
			// 
			this->labelNumber_PerevodTo->AutoSize = true;
			this->labelNumber_PerevodTo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelNumber_PerevodTo->Location = System::Drawing::Point(51, 95);
			this->labelNumber_PerevodTo->Name = L"labelNumber_PerevodTo";
			this->labelNumber_PerevodTo->Size = System::Drawing::Size(128, 21);
			this->labelNumber_PerevodTo->TabIndex = 5;
			this->labelNumber_PerevodTo->Text = L"Введите число";
			// 
			// labelNumber_PerevodIn
			// 
			this->labelNumber_PerevodIn->AutoSize = true;
			this->labelNumber_PerevodIn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelNumber_PerevodIn->Location = System::Drawing::Point(208, 95);
			this->labelNumber_PerevodIn->Name = L"labelNumber_PerevodIn";
			this->labelNumber_PerevodIn->Size = System::Drawing::Size(36, 21);
			this->labelNumber_PerevodIn->TabIndex = 6;
			this->labelNumber_PerevodIn->Text = L"СС";
			// 
			// labelPerevod_Result
			// 
			this->labelPerevod_Result->AutoSize = true;
			this->labelPerevod_Result->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPerevod_Result->Location = System::Drawing::Point(140, 261);
			this->labelPerevod_Result->Name = L"labelPerevod_Result";
			this->labelPerevod_Result->Size = System::Drawing::Size(86, 21);
			this->labelPerevod_Result->TabIndex = 7;
			this->labelPerevod_Result->Text = L"Результат";
			// 
			// labelNumber_Perevod_In
			// 
			this->labelNumber_Perevod_In->AutoSize = true;
			this->labelNumber_Perevod_In->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelNumber_Perevod_In->Location = System::Drawing::Point(293, 95);
			this->labelNumber_Perevod_In->Name = L"labelNumber_Perevod_In";
			this->labelNumber_Perevod_In->Size = System::Drawing::Size(324, 21);
			this->labelNumber_Perevod_In->TabIndex = 8;
			this->labelNumber_Perevod_In->Text = L"СС, в которую нужно перевести число";
			// 
			// checkBox_Perevod
			// 
			this->checkBox_Perevod->AutoSize = true;
			this->checkBox_Perevod->Checked = true;
			this->checkBox_Perevod->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox_Perevod->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_Perevod->Location = System::Drawing::Point(44, 19);
			this->checkBox_Perevod->Name = L"checkBox_Perevod";
			this->checkBox_Perevod->Size = System::Drawing::Size(112, 25);
			this->checkBox_Perevod->TabIndex = 9;
			this->checkBox_Perevod->Text = L"Перевести";
			this->checkBox_Perevod->UseVisualStyleBackColor = true;
			this->checkBox_Perevod->Click += gcnew System::EventHandler(this, &MyForm::checkBox_Perevod_Click);
			// 
			// groupBox_Perevod
			// 
			this->groupBox_Perevod->Controls->Add(this->checkBox_Perevod);
			this->groupBox_Perevod->Location = System::Drawing::Point(10, 12);
			this->groupBox_Perevod->Name = L"groupBox_Perevod";
			this->groupBox_Perevod->Size = System::Drawing::Size(191, 57);
			this->groupBox_Perevod->TabIndex = 10;
			this->groupBox_Perevod->TabStop = false;
			// 
			// groupBox_
			// 
			this->groupBox_->Controls->Add(this->checkBox_Plus);
			this->groupBox_->Location = System::Drawing::Point(229, 12);
			this->groupBox_->Name = L"groupBox_";
			this->groupBox_->Size = System::Drawing::Size(191, 57);
			this->groupBox_->TabIndex = 11;
			this->groupBox_->TabStop = false;
			// 
			// checkBox_Plus
			// 
			this->checkBox_Plus->AutoSize = true;
			this->checkBox_Plus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_Plus->Location = System::Drawing::Point(44, 19);
			this->checkBox_Plus->Name = L"checkBox_Plus";
			this->checkBox_Plus->Size = System::Drawing::Size(101, 25);
			this->checkBox_Plus->TabIndex = 9;
			this->checkBox_Plus->Text = L"Сложить";
			this->checkBox_Plus->UseVisualStyleBackColor = true;
			this->checkBox_Plus->Click += gcnew System::EventHandler(this, &MyForm::checkBox_Plus_Click);
			// 
			// label_firstnumber
			// 
			this->label_firstnumber->AutoSize = true;
			this->label_firstnumber->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_firstnumber->Location = System::Drawing::Point(51, 95);
			this->label_firstnumber->Name = L"label_firstnumber";
			this->label_firstnumber->Size = System::Drawing::Size(121, 21);
			this->label_firstnumber->TabIndex = 12;
			this->label_firstnumber->Text = L"Первое число";
			this->label_firstnumber->Visible = false;
			// 
			// label1_secondnumber
			// 
			this->label1_secondnumber->AutoSize = true;
			this->label1_secondnumber->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1_secondnumber->Location = System::Drawing::Point(394, 95);
			this->label1_secondnumber->Name = L"label1_secondnumber";
			this->label1_secondnumber->Size = System::Drawing::Size(121, 21);
			this->label1_secondnumber->TabIndex = 13;
			this->label1_secondnumber->Text = L"Второе число";
			this->label1_secondnumber->Visible = false;
			// 
			// textBox_secondnumber
			// 
			this->textBox_secondnumber->Location = System::Drawing::Point(368, 119);
			this->textBox_secondnumber->Name = L"textBox_secondnumber";
			this->textBox_secondnumber->Size = System::Drawing::Size(173, 20);
			this->textBox_secondnumber->TabIndex = 14;
			this->textBox_secondnumber->Visible = false;
			this->textBox_secondnumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_secondnumber_KeyPress);
			// 
			// numericUpDown_result_Plus
			// 
			this->numericUpDown_result_Plus->Location = System::Drawing::Point(418, 261);
			this->numericUpDown_result_Plus->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			this->numericUpDown_result_Plus->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown_result_Plus->Name = L"numericUpDown_result_Plus";
			this->numericUpDown_result_Plus->Size = System::Drawing::Size(41, 20);
			this->numericUpDown_result_Plus->TabIndex = 15;
			this->numericUpDown_result_Plus->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown_result_Plus->Visible = false;
			// 
			// button_plus
			// 
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->Location = System::Drawing::Point(247, 176);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(156, 45);
			this->button_plus->TabIndex = 16;
			this->button_plus->Text = L"Сложить";
			this->button_plus->UseVisualStyleBackColor = true;
			this->button_plus->Visible = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox_Minus);
			this->groupBox1->Location = System::Drawing::Point(449, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(191, 57);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			// 
			// checkBox_Minus
			// 
			this->checkBox_Minus->AutoSize = true;
			this->checkBox_Minus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_Minus->Location = System::Drawing::Point(44, 19);
			this->checkBox_Minus->Name = L"checkBox_Minus";
			this->checkBox_Minus->Size = System::Drawing::Size(98, 25);
			this->checkBox_Minus->TabIndex = 9;
			this->checkBox_Minus->Text = L"Вычесть";
			this->checkBox_Minus->UseVisualStyleBackColor = true;
			this->checkBox_Minus->Click += gcnew System::EventHandler(this, &MyForm::checkBox_Minus_Click);
			// 
			// button_Minus
			// 
			this->button_Minus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Minus->Location = System::Drawing::Point(247, 176);
			this->button_Minus->Name = L"button_Minus";
			this->button_Minus->Size = System::Drawing::Size(156, 45);
			this->button_Minus->TabIndex = 17;
			this->button_Minus->Text = L"Вычесть";
			this->button_Minus->UseVisualStyleBackColor = true;
			this->button_Minus->Visible = false;
			this->button_Minus->Click += gcnew System::EventHandler(this, &MyForm::button_Minus_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 377);
			this->Controls->Add(this->button_Minus);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->numericUpDown_result_Plus);
			this->Controls->Add(this->textBox_secondnumber);
			this->Controls->Add(this->label1_secondnumber);
			this->Controls->Add(this->label_firstnumber);
			this->Controls->Add(this->groupBox_);
			this->Controls->Add(this->groupBox_Perevod);
			this->Controls->Add(this->labelNumber_Perevod_In);
			this->Controls->Add(this->labelPerevod_Result);
			this->Controls->Add(this->labelNumber_PerevodIn);
			this->Controls->Add(this->labelNumber_PerevodTo);
			this->Controls->Add(this->numericUpDownOutput);
			this->Controls->Add(this->numericUpDownInput);
			this->Controls->Add(this->buttonPerevod);
			this->Controls->Add(this->textBoxOutput);
			this->Controls->Add(this->textBoxInput);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownOutput))->EndInit();
			this->groupBox_Perevod->ResumeLayout(false);
			this->groupBox_Perevod->PerformLayout();
			this->groupBox_->ResumeLayout(false);
			this->groupBox_->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_result_Plus))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBoxInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox_Plus_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox_Perevod_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox_secondnumber_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void numericUpDownInput_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownOutput_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Minus_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox_Minus_Click(System::Object^ sender, System::EventArgs^ e);
};
}
