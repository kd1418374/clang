#include<stdio.h>
main()
{
	char s[80];
	int i = 0;

	printf("暗号化文字列を入力して下さい＞");
	scanf("%s", &s);

	while (s[i] != '\0')
	{
		s[i]--;
		i++;
	}

	printf("複合済み文字列は、%s\n", s);
}