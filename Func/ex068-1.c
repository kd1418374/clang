#include<stdio.h>
main()
{
	int a,b, c;

	printf("”‚ğ‚QŒÂ“ü—Í„");
	c = scanf("%d%d", &a,&b);
	if (c != EOF)
	{
		printf("%dŒÂ“ü—Í\n", c);
	}
	else
	{
		printf("EOF\n");
	}
}
