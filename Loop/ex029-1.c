#include<stdio.h>
main()
{
	int su;

	printf("�������āF");
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
		printf("�G���[");
	}
}