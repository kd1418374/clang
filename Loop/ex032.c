#include<stdio.h>
main()
{
	int su, i;
	printf("�������āF");
	scanf("%d", &su);
	for (i = 1; i <= 5; i++)
	{
		printf("%d ", su * i);
	}
	/*i = 1;
	while (i <= 5)
	{
		printf("%d ", su * i);
		i++;
	}*/
}