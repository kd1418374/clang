#include<stdio.h>
main()
{
	int su;

	printf("数を入れて：");
	scanf("%d", &su);

	if (su >= 0)
	{
		while (su > 0)
		{
			printf("*");
			su--;
		}
	}

	else
	{
		printf("エラー");
	}
}