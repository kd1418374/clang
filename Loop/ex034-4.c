#include<stdio.h>
main()
{
	int num, i, j;
	printf("数は？");
	scanf("%d", &num);
	j = 0;
	do {
		i = 0;
		
		do// 空白用
		{
			printf(" ");
			i++;
		} while (i < num-j);

		i = 0;

		do//*用
		{
			printf("*");
			i++;

		} while (i < j+1);

		printf("\n");
		j++;

	} while (j<num);
}