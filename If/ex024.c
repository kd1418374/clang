#include<stdio.h>
main()
{
	char moji;
	printf("��������́F");
	scanf("%c", &moji);

	if (moji <= 'Z' && moji >= 'A')
	{
		printf("�啶���ł�");
	}
	else
	{
		printf("���̑��̕����ł�");
	}
}