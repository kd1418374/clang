#include<stdio.h>
main()
{
	char s[80];
	int i = 0;

	printf("�Í������������͂��ĉ�������");
	scanf("%s", &s);

	while (s[i] != '\0')
	{
		s[i]--;
		i++;
	}

	printf("�����ςݕ�����́A%s\n", s);
}