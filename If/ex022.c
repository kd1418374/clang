#include<stdio.h>
main()
{
	int y;
	printf("西暦を入力:");
	scanf("%d", &y);
	if (1988 >= y)
	{
		printf("平成より前に生まれています\n");
	}
	else
	{
		printf("平成生まれです\n");
	}
}