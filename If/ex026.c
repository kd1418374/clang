#include<stdio.h>
main()
{
	int m, y, n, l;

	printf("�N����́F");
	scanf("%d", &y);

	printf("������́F");
	scanf("%d", &m);
	n = y % 100;
	l = y % 400;
	y = y % 4;

	if (l == 0 && m == 2 || y == 0 && m == 2 && n != 0)
	{
		printf("�ŏI����29���ł�\n");
	}

	else
	{
		
			if (m == 2)
			{
				printf("�ŏI����28���ł�\n");
			}
			else
			{
				if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11)
				{
					printf("�ŏI����30���ł�\n");
				}

				else
				{
					printf("�ŏI����31���ł�\n");
				}


			}
		
	}
	

}