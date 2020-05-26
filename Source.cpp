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
	int result = 0;
	do
	{
		cout << endl << "Введите число: ";
		cin >> x;
		showBinaryForm(x, result);
		cout << endl << "Продолжить? (у/n): ";
		c = _getch();
	} while (c == 'y');
	

	system("pause>nul");
	return 0;
}
// v hode testirovaniya ne nashel bagov v predstavlenii chisel. 
// Edinstvennoe zamechanie - esli vvodim 0, to vivod budet 0, a ne v 16richnom formate.
// No eto ne kritichno i ispravlyat ne obyazatelno