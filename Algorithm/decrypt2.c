#include<stdio.h>
main()
{

	char s[20];
	int i, no;

	printf("���������͂��ĉ�������");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]�̈Í����L�[��", i);
		scanf("%d", &no);
		s[i] = s[i] - no;
	}

	printf("�������ςݕ�����́A%s\n", s);
}