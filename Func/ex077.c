#include<stdio.h>
void maxmin(int a, int b, int c, int* p_max, int* p_min);
main()
{
	int a, b, c, max, min;

	printf("�������R���́F");
	scanf("%d%d%d", &a, &b, &c);

	maxmin(a, b, c, &max, &min);

	printf("�ő�l = %d\t�ŏ��l = %d\n", max, min);
}

void maxmin(int a, int b, int c, int* p_max, int* p_min)
{
	*p_max = a;

	if (*p_max < b)
	{
		*p_max = b;
	}

	if (*p_max < c)
	{
		*p_max = c;
	}

	*p_min = a;

	if (*p_min > b)
	{
		*p_min = b;
	}

	if (*p_min > c)
	{
		*p_min = c;
	}

	return;
}
