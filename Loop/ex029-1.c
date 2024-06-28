#include<stdio.h>
main()
{
	int su;

	printf("”‚ğ“ü‚ê‚ÄF");
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
		printf("ƒGƒ‰[");
	}
}