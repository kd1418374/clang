#include<stdio.h>
main()
{

	char a[256], * b;

	printf("文字列を入力＞");
	b = gets(a);

	while (b != NULL)
	{
		printf("入力されたのは%s\n",b);
		printf("文字列を入力＞");
		b = gets(a);
	}
}