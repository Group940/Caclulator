#include <iostream>
#include <iostream>
#include <cmath>
#include "Convert_and_calculate.h"
using namespace std;

int main()
{
	setlocale(0, "Russian");

	double dec_number;//Десятичное число
	char input[80] = { 0 };//Строка для ввода исходного числа
	char output[80] = { 0 };//Строка для вывода результата
	int p_input, p_output;//Системы счисления - для ввода и для вывода соответственно

	cout << "Введите систему счисления для ввода: ";
	cin >> p_input;
	cout << "Введите число в "<< p_input <<" сс: ";
	cin >> input;

	dec_number = fromAnyToDenary(input, p_input);//Переводим в 10

	cout << "Введите систему счисления для вывода: ";
	cin >> p_output;
	//Achtung! Костыли! Передавать в функцию ниже 10-чное число можно только по модулю!
	fromDenaryToAny(p_output, output, fabs(dec_number));//Переводим в целевую сс. Результат записывается в строку output - она передаётся по указателю

	if (dec_number > 0)
		cout << output << endl;
	else
		cout << "-" << output<<endl;

	system("pause");
	return 0;
}