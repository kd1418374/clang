#include<stdio.h>
main()
{
	char moji;

	printf("��������́F");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		printf("�A���t�@�x�b�g\n");
	}

	else
	{
		if (moji >= 'a' && moji <= 'z')
		{
			printf("�A���t�@�x�b�g\n");
		}

		else
		{
			if (moji >= '0' && moji <= '9')
			{
				printf("����\n");
			}
			else
			{
				printf("���̑�\n");


			}
		}
	}
}