#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int data[20], i, target, work;


	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
	}

	printf("\n�V���b�t���O\ndata[ ] = ");
	for (i = 0; i < 20; i++)
	{
		printf("%3d", data[i]);
	}
	printf("\n");
	//�V���b�t��1
	/*srand(time(0));

	for (i = 0; i < 20; i++)
	{
		target = rand() % 20;

		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}*/

	//�V���b�t��2
	srand(time(0));
	for (i = 19; i > 0; i--)
	{
		target = rand() % i;

		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}

	//�m�F�p�̕\��
	printf("\n�V���b�t����\ndata[ ] = ");
	for (i = 0; i < 20; i++)
	{
		printf("%3d", data[i]);
	}
	printf("\n");

}