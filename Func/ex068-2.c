#include<stdio.h>
main()
{

	char a[256], * b;

	printf("���������́�");
	b = gets(a);

	while (b != NULL)
	{
		printf("���͂��ꂽ�̂�%s\n",b);
		printf("���������́�");
		b = gets(a);
	}
}