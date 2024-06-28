#include<stdio.h>
int tbl_max(int tbl[]);
int tbl_min(int tbl[]);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	int max, min;
	max = tbl_max(data);
	printf("Å‘å’l= %d\n", max);
	min = tbl_min(data);
	printf("Å¬’l= %d\n", min);
}

int tbl_max(int tbl[])
{
	int i, max = tbl[0];
	for (i = 0; i < 8; i++)
	{
		if (max < tbl[i])
		{
			max = tbl[i];
		}
	}
	return max;
}

int tbl_min(int tbl[])
{
	int i, min;
	for (min = tbl[0], i = 0; i < 8; i++)
	{
		if (min > tbl[i])
		{
			min = tbl[i];
		}
	}
	return min;
}