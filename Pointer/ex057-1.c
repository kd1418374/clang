#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i;

	p_tbl = &tbl[1][0];

	for (i = 0; i < 3; i++)
	{
			printf(" %d ", *p_tbl++);
	}
		printf("\n");
}