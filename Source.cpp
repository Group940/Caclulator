#include <iostream>
#include "windows.h"
#include "conio.h"
#include "IEEE_CALC.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float x = 0;
	char c = 0;
	do
	{
		cout << endl << "Введите число: ";
		cin >> x;
		showBinaryForm(x);
		cout << endl << "Продолжить? (у/n): ";
		c = _getch();
	} while (c == 'y');
	

	system("pause>nul");
	return 0;
}