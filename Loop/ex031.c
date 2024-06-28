#include<stdio.h>
main()
{
	int i, sum;
	for (i = 1, sum = 0; i <= 10; i++)
	{
		printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a = %d\n", i, sum += i);
	}
	
	/*sum = 0;
	i = 1;
	while (i <= 10)
	{
		printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a = %d\n", i, sum += i);
		i++;
	}*/
}