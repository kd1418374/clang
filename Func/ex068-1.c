#include<stdio.h>
main()
{
	int a,b, c;

	printf("�����Q���́�");
	c = scanf("%d%d", &a,&b);
	if (c != EOF)
	{
		printf("%d����\n", c);
	}
	else
	{
		printf("EOF\n");
	}
}
