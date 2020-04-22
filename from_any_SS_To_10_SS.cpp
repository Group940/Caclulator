#include <iostream>
#include <math.h>
#include <cmath>



double from_any_SS_To_10_SS(char* input, int ss);  //Функция перевода из 10 сс в любую другую - писал Большаков И.

int myatoi(char c);								   //Функция перевода из 10 сс в любую другую - писал Башев К.

double from_any_SS_To_10_SS(char* input, int ss)
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