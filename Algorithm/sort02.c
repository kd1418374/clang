#include<stdio.h>
#define SIZE 5//�z��̃T�C�Y
main()
{
	int w, i, j, d[] = { 30,7,25,16,10 };

	printf("�\�[�g�O\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("d[%d]:%d\n", i, d[i]);
	}

	//�o�u���\�[�g�i�����j
	for (i = SIZE-1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (d[j] > d[j+1])
			{
				w = d[j];
				d[j] = d[j+1];
				d[j+1] = w;
			}
		}
	}
	
	printf("�\�[�g��\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("d[%d]:%d\n", i, d[i]);
	}
}