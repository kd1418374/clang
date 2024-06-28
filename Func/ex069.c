#include<stdio.h>
main()
{
	int a,sum=0, c, i = 0;

	printf("整数：");
	c = scanf("%d", &a);

	while (c != EOF)
	{
		sum += a;
		i++;
		printf("整数：");
		c = scanf("%d", &a);
	}

	/*printf("整数：);
	while(scanf("%d",&a)!=EOF)
	{
		sum += a;
		i++;
		printf("整数：");
	}*/
	
	/*printf("整数：);
	for(;scanf("%d",&a)!=EOF;)
	{
		sum += a;
		i++;
		printf("整数：");
	}*/

	printf("合計＝%d\t平均＝%.2f\n", sum, (float)sum / i);
}