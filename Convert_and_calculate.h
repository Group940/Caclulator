#pragma once
#include <cmath>

//##################################################
//# ������� ��� ������������� � �������� ��������� #
//##################################################

// ������� �������� �� 10 �� � ����� ������
void fromDenaryToAny(int p, char *s, double a);

// ������� ��� �������� �� ����� �� � 10
double fromAnyToDenary(char* input, int ss);

// ������� ��� �������� �����
double Plus(char* x, char* y, int s1, int s2, int s3, char *output);

// ������� ��� ��������� �����
double Minus(char* x, char* y, int s1, int s2, int s3, char* output);

//##################################################
//# ��������� ������������. ������� �� ��������!!! #
//##################################################

// ����������� ����������������� �����
char digit(int num);

// ��������� ����� ����� �����
int dectox_int(int a, int p, char *s);

// ��������� ������� ����� �����
void dectox_double(double a, int p, char *s);

// ������� ��� �������� ������� � 10-���� �����
int myatoi(char c);