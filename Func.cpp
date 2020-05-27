
#include <iostream>
#include"Convert_and_calculate.h"

using namespace std;

string ban(int input) {
	char output[9] = { 0 };
	char s[1] = { 0 };
	int x;
	int mask = 0x0000000f;
	for (int i = 0; i < 8; i++) {
		x = input & mask;
		dectox_int(x, 16, s);
		input = input >> 4;
		output[7 - i] = s[0];
		s[0] = { 0 };
	}
	return output;
}