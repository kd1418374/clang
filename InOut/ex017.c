#include<stdio.h>
main()
{
	float no1, no2, no3;

	printf("1�ڂ̐���:");
	scanf("%f", &no1);


	printf("2�ڂ̐���:");
	scanf("%f", &no2);


	printf("3�ڂ̐���:");
	scanf("%f", &no3);

	printf("���v=%.2f\n����%.2f", no1 + no2 + no3, (no1 + no2 + no3) / 3);
}
