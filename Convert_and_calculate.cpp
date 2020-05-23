#include "Convert_and_calculate.h"

void fromDenaryToAny(int p, char *s, double a)
{
	int k = dectox_int((int)a, p, s);
	s[k++] = ',';
	dectox_double(a - (int)a, p, &s[k]);
}

// Отображение шестнадцатеричной цифры
char digit(int num)
{
	switch (num) {
	case 0: return '0';
	case 1: return '1';
	case 2: return '2';
	case 3: return '3';
	case 4: return '4';
	case 5: return '5';
	case 6: return '6';
	case 7: return '7';
	case 8: return '8';
	case 9: return '9';
	case 10: return 'A';
	case 11: return 'B';
	case 12: return 'C';
	case 13: return 'D';
	case 14: return 'E';
	case 15: return 'F';
	}
}

// Получение целой части числа
int dectox_int(int a, int p, char *s)
{
	int num = (int)a;
	int rest = num % p;
	num /= p;
	if (num == 0)
	{
		s[0] = digit(rest); return 1;
	}
	int k = dectox_int(num, p, s);

	s[k++] = digit(rest);
	return k;
}

// Получение дробной части числа
void dectox_double(double a, int p, char *s)
{
	int iter = 0;
	int k = 0;
	double a1 = a;
	do {
		a1 = a1 * p;
		int num = (int)(a1);
		s[k++] = digit(num);
		a1 -= (int)a1;
		iter++;
	} while (a1 > 0.00000001 && iter < 10);
	s[k] = '\0';
}

double fromAnyToDenary(char* input, int ss)
{
	bool zap = false;
	int l = 1;
	int n, m;
	n = 0; m = 0;
	int i = 0;
	while (input[i] != '\0')
	{
		if (input[i] == ',' || input[i] == '.')
		{
			zap = true;
			break;
		}
		if (input[i] != '-')
		{
			n++;
		}
		i++;
	}
	if (zap)
	{
		i++;
		while (input[i] != '\0')
		{
			if (input[i] != ' ')
			{
				m++;
			}
			i++;
		}
	}


	double sum = 0;
	double sum1 = 0;
	n = n - 1;
	int j = 0;
	float output[96];
	if (zap)
	{
		int c = n;
		if (input[0] == '-')
		{
			j = j + 1;
			while (n != -1)
			{
				output[j] = myatoi(input[j]) * pow(ss, n);
				n--;
				j++;
			}
			for (i = 1; i < (c + 2); i++)
			{
				sum = sum - output[i];
			}

			j = j + 1;
			while (l < m + 1)
			{
				output[j] = myatoi(input[j]) * pow(ss, l * (-1));
				sum1 = sum1 + output[j];
				j++;
				l++;

			}
			sum = sum - sum1;
		}
		else
		{
			while (n != -1)
			{
				output[j] = myatoi(input[j]) * pow(ss, n);
				n--;
				j++;
			}
			for (i = 0; i < c + 1; i++)
			{
				sum = sum + output[i];
			}

			j = j + 1;
			while (l < m + 1)
			{
				output[j] = myatoi(input[j]) * pow(ss, l * (-1));
				sum1 = sum1 + output[j];
				j++;
				l++;

			}
			sum = sum + sum1;
		}

	}

	else
	{
		int c = n;
		if (input[0] == '-')
		{
			j = j + 1;
			while (n != -1)
			{
				output[j] = myatoi(input[j]) * pow(ss, n);
				n--;
				j++;
			}
			for (i = 1; i < (c + 2); i++)
			{
				sum = sum - output[i];
			}
		}
		else
		{
			while (n != -1)
			{
				output[j] = myatoi(input[j]) * pow(ss, n);
				n--;
				j++;
			}
			for (i = 0; i < c + 1; i++)
			{
				sum = sum + output[i];
			}
		}
	}
	return sum;
}

double Plus(char* x, char* y, int s1, int s2, int s3, char* output)
{
	double a = fromAnyToDenary(x, s1);
	double b = fromAnyToDenary(y, s2);
	double c = a + b;
	fromDenaryToAny(s3, output, fabs(c));
	return c;
}

double Minus(char* x, char* y, int s1, int s2, int s3, char* output)
{
	double a = fromAnyToDenary(x, s1);
	double b = fromAnyToDenary(y, s2);
	double c = a - b;
	fromDenaryToAny(s3, output, fabs(c));
	return c;
}

int myatoi(char c)
{
	if (c == 'a' || c == 'A') return 10;
	else if (c == 'b' || c == 'B') return 11;
	else if (c == 'c' || c == 'C') return 12;
	else if (c == 'd' || c == 'D') return 13;
	else if (c == 'e' || c == 'E') return 14;
	else if (c == 'f' || c == 'F') return 15;
	else return (c - '0');
}