#include<stdio.h>
main()
{
	int i, j;
	float x[3][2],gokei;

	for (i=0;i < 3;i++)
	{
		for (gokei=0,j=0;j < 2;j++)
		{
			printf("x[%d][%d] = ", i, j);
			scanf("%f", &x[i][j]);
			gokei += x[i][j];
		}
		printf("%d�s�ڂ̕��� = %.2f\n\n", i, gokei / j);
	}
}