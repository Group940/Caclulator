#pragma once
#include <cmath>

//##################################################
//# Функции для использования в основной программе #
//##################################################

// Функция перевода из 10 сс в любую другую
void fromDenaryToAny(int p, char *s, double a);

// Функция для перевода из любой сс в 10
double fromAnyToDenary(char* input, int ss);

// Функция для сложения чисел
double Plus(char* x, char* y, int s1, int s2, int s3, char *output);

// Функция для вычитания чисел
double Minus(char* x, char* y, int s1, int s2, int s3, char* output);

//##################################################
//# Служебные подпрограммы. Вручную не вызывать!!! #
//##################################################

// Отображение шестнадцатеричной цифры
char digit(int num);

// Получение целой части числа
int dectox_int(int a, int p, char *s);

// Получение дробной части числа
void dectox_double(double a, int p, char *s);

// Функция для перевода символа в 10-чное число
int myatoi(char c);