#include<stdio.h>
main()
{
	int a, b, w;

	a = 5;
	b = 3;

	printf("����ւ��O�Fa = %d , b = %d\n", a, b);

	w = a;
	a = b;
	b = w;

	printf("����ւ���Fa = %d , b = %d\n", a, b);
}