#include<stdio.h>
main()
{
	float no;
	printf("実数をいれて:");
	scanf("%f", &no);
	printf("2倍すると%.2f\n3倍すると%.2f\n", no * 2, no * 3);
}