#pragma once

#include <iostream>

using namespace std;

union binaryForm
{
	float number;
	unsigned char byte[4];
};

void showBinaryForm(float x, int &result);