#include<stdio.h>
main()
{
	int su, sum, i;
	printf("数は？");
	scanf("%d", &su);
	
	for (sum=0,i = 0 ; su != -999 ; i++)
	{
		sum += su;
		printf("数は？");
		scanf("%d", &su);
	}
	
	printf("合計 = %d\t平均 = %.2f\n", sum, (float)sum / i);
}