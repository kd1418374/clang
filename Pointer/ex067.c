#include<stdio.h>
#include<string.h>
#define CNT 4
main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" }, * w;
	int i, j;
	char**p = p_tbl;
	for (i = 0; i < CNT - 1; i++)
	{
		for (j = i + 1; j < CNT; j++)
		{
			if (strcmp(*(p + i), *(p + j)) < 0)
			{//*(p+i)��p_tbl[i]�Ɠ���
				w = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = w;
			}
		}
	}
	p = p_tbl;
	for (i = 0; i < CNT; i++)
	{
		printf("%s\n", *(p + i));
	}
}