#include<stdio.h>
main()
{
	float no1, no2, no3;

	printf("1つ目の整数:");
	scanf("%f", &no1);


	printf("2つ目の整数:");
	scanf("%f", &no2);


	printf("3つ目の整数:");
	scanf("%f", &no3);

	printf("合計=%.2f\n平均%.2f", no1 + no2 + no3, (no1 + no2 + no3) / 3);
}
