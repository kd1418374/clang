#include<stdio.h>
main()
{
	char moji;
	int num1, num2, num3,sum;

	printf("処理を入力：");
	scanf("%c", &moji);
	
	printf("整数を入力：");
	scanf("%d %d %d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	switch (moji)
	{
	case 'd':case'D':
		if (num1 > num2)
		{
			if (num1 > num3)
			{
				printf("最大値は%d\n", num1); 
			}
			else
			{
				printf("最大値は%d\n", num3);
			}
		}

		else
		{
			printf("最大値は%d\n", num2);
		}
		break;

	case's':case'S':
		if (num1 < num2)
		{
			if (num1 < num3)
			{
				printf("最小値は%d\n", num1);
			}

			else
			{
				printf("最小値は%d\n", num3);
			}
		}

		else
		{
			printf("最小値%d\n", num2);
		}
		break;

	case'g':case'G':printf("合計は%dです\n",sum); break;
	case'h':case'H':printf("平均は%.2fです\n", (float)sum / 3); break;
	}
}