#include <iostream>
#include <iostream>
#include <cmath>
#include "Convert_and_calculate.h"
using namespace std;

int main()
{
	setlocale(0, "Russian");

	double dec_number;//���������� �����
	char input[80] = { 0 };//������ ��� ����� ��������� �����
	char output[80] = { 0 };//������ ��� ������ ����������
	int p_input, p_output;//������� ��������� - ��� ����� � ��� ������ ��������������

	cout << "������� ������� ��������� ��� �����: ";
	cin >> p_input;
	cout << "������� ����� � "<< p_input <<" ��: ";
	cin >> input;

	dec_number = fromAnyToDenary(input, p_input);//��������� � 10

	cout << "������� ������� ��������� ��� ������: ";
	cin >> p_output;
	//Achtung! �������! ���������� � ������� ���� 10-���� ����� ����� ������ �� ������!
	fromDenaryToAny(p_output, output, fabs(dec_number));//��������� � ������� ��. ��������� ������������ � ������ output - ��� ��������� �� ���������

	if (dec_number > 0)
		cout << output << endl;
	else
		cout << "-" << output<<endl;

	system("pause");
	return 0;
}