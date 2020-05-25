#include "IEEE_Calc.h"

void showBinaryForm(float x)
{
	binaryForm b;
	b.number = x;
	int result = 0;

	// unsigned char *ptr = reinterpret_cast<unsigned char *>(&num);

	for (int i = 3; i >= 0; i--)
	{
		//cout << hex << result;
		result += (int)b.byte[i];
		if (i != 0)
			result <<= 8;
	}
	cout << hex << result << endl;
}
