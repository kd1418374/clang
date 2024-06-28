#include<stdio.h>
main()
{
	int y, n, m;
	
	printf("西暦を入力：");
	scanf("%d", &y);

	n = y % 100;
	m = y % 400;
	y = y % 4;

	if (m == 0)
	{
		printf("うるう年です\n");
	}
	else
	{
		if (y == 0 && n != 0)
		{
			printf("うるう年です\n");
		}
		else
		{
			printf("うるう年ではありません\n");
		}
	
		printf("うるう年ではありません\n");

	}
}