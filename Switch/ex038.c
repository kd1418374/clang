#include<stdio.h>
main()
{
	int num;
	printf("整数を入力：");
	scanf("%d", &num);

	if (10 <= num && num <= 49)
	{
		switch (num/10)
		{
		case 1:printf("10点台です\n"); break;
		case 2:printf("20点台です\n"); break;
		case 3:printf("30点台です\n"); break;
		case 4:printf("40点台です\n");
		}
	}

	else
	{
		printf("エラー：１０〜４９の範囲で入力してください\n");
	}
}