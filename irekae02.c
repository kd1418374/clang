#include<stdio.h>
main()
{
	int a, b;

	a = 5;
	b = 3;

	printf("����ւ��O�Fa = %d , b = %d\n", a, b);

	a = a + b;
	b = b - a;
	b = 0 - b;
	a = a - b;

	printf("����ւ���Fa = %d , b = %d\n", a, b);

}