#include<stdio.h>
main()
{
	int m, y, n, l;

	printf("年を入力：");
	scanf("%d", &y);

	printf("月を入力：");
	scanf("%d", &m);
	n = y % 100;
	l = y % 400;
	y = y % 4;

	if (l == 0 && m == 2 || y == 0 && m == 2 && n != 0)
	{
		printf("最終日は29日です\n");
	}

	else
	{
		
			if (m == 2)
			{
				printf("最終日は28日です\n");
			}
			else
			{
				if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11)
				{
					printf("最終日は30日です\n");
				}

				else
				{
					printf("最終日は31日です\n");
				}


			}
		
	}
	

}