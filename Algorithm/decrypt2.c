#include<stdio.h>
main()
{

	char s[20];
	int i, no;

	printf("文字列を入力して下さい＞");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]の暗号化キー＞", i);
		scanf("%d", &no);
		s[i] = s[i] - no;
	}

	printf("複合化済み文字列は、%s\n", s);
}