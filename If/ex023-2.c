#include<stdio.h>
main()
{
	int y, n, m;
	
	printf("�������́F");
	scanf("%d", &y);

	n = y % 100;
	m = y % 400;
	y = y % 4;

	if (m == 0)
	{
		printf("���邤�N�ł�\n");
	}
	else
	{
		if (y == 0 && n != 0)
		{
			printf("���邤�N�ł�\n");
		}
		else
		{
			printf("���邤�N�ł͂���܂���\n");
		}
	
		printf("���邤�N�ł͂���܂���\n");

	}
}