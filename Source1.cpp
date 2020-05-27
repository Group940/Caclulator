#include <iostream>
int machRep(int a)
{
	if (a < 0)
		a = ~a + 1;
	return 0;
}
int main()
{
	int a;
	scanf_s("%d", &a);
	machRep(a);
	printf("%X", a);
}