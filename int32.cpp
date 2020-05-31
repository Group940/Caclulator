#include <iostream>
using namespace std;

//Функция машинного представление int32
string int32(int input) {
	char output[9] = { 0 };
	int x;
	int masc = 0x0000000f;
	for (int i = 0; i < 8; i++) {
		x = input & masc;
		input = input >> 4;
		switch (x)
		{
		case 0:output[7 - i] = '0'; break;
		case 1:output[7 - i] = '1'; break;
		case 2:output[7 - i] = '2'; break;
		case 3:output[7 - i] = '3'; break;
		case 4:output[7 - i] = '4'; break;
		case 5:output[7 - i] = '5'; break;
		case 6:output[7 - i] = '6'; break;
		case 7:output[7 - i] = '7'; break;
		case 8:output[7 - i] = '8'; break;
		case 9:output[7 - i] = '9'; break;
		case 10:output[7 - i] = 'A'; break;
		case 11:output[7 - i] = 'B'; break;
		case 12:output[7 - i] = 'C'; break;
		case 13:output[7 - i] = 'D'; break;
		case 14:output[7 - i] = 'E'; break;
		case 15:output[7 - i] = 'F'; break;
		}

	}
	return output;
}
