#include<stdio.h>
main()
{
	char moji;
	int num1, num2, num3,sum;

	printf("��������́F");
	scanf("%c", &moji);
	
	printf("��������́F");
	scanf("%d %d %d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	switch (moji)
	{
	case 'd':case'D':
		if (num1 > num2)
		{
			if (num1 > num3)
			{
				printf("�ő�l��%d\n", num1); 
			}
			else
			{
				printf("�ő�l��%d\n", num3);
			}
		}

		else
		{
			printf("�ő�l��%d\n", num2);
		}
		break;

	case's':case'S':
		if (num1 < num2)
		{
			if (num1 < num3)
			{
				printf("�ŏ��l��%d\n", num1);
			}

			else
			{
				printf("�ŏ��l��%d\n", num3);
			}
		}

		else
		{
			printf("�ŏ��l%d\n", num2);
		}
		break;

	case'g':case'G':printf("���v��%d�ł�\n",sum); break;
	case'h':case'H':printf("���ς�%.2f�ł�\n", (float)sum / 3); break;
	}
}