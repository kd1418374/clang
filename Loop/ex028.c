#include<stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	printf("�������āF");
	scanf("%d", &ia);
	while (ia != -999)
	{
		gokei += ia;
		printf("�������āF");
		scanf("%d", &ia);

	}
	printf("���v��%d\n", gokei);
}