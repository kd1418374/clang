#include<stdio.h>
main()
{
	float sum, box[3];
	int i;

	for (i = 0, sum = 0; i < 3; i++)
	{
		printf("��������́F");
		scanf("%f", &box[i]);

		sum += box[i];
	}

	printf("���v�� %.2f �ł�\n", sum);
	printf("���ς� %.2f �ł�\n", sum / 3);

}