#include<stdio.h>
int tbl_gokei3(int tbl[], int number);/*�v���g�^�C�v�錾*/
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei3(a, 5);/*�֐�tbl_gokei3�̌Ăяo��*/
	printf("gokei = %d\n", gokei);
}

int tbl_gokei3(int tbl[], int number)
{
	int gokei = 0, i = 0;
	for (gokei = 0, i = 0; i < number; i++)
	{
		gokei += tbl[i];
	}
	return gokei;
}