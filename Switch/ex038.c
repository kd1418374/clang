#include<stdio.h>
main()
{
	int num;
	printf("��������́F");
	scanf("%d", &num);

	if (10 <= num && num <= 49)
	{
		switch (num/10)
		{
		case 1:printf("10�_��ł�\n"); break;
		case 2:printf("20�_��ł�\n"); break;
		case 3:printf("30�_��ł�\n"); break;
		case 4:printf("40�_��ł�\n");
		}
	}

	else
	{
		printf("�G���[�F�P�O�`�S�X�͈̔͂œ��͂��Ă�������\n");
	}
}