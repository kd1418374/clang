#include<stdio.h>
main()
{
	char ope;
	printf("���Z�q�����āF");
	scanf("%c", &ope);
	switch (ope) {
		case '+':printf("���Z�ł�\n"); break;
		case '-':printf("���Z�ł�\n"); break;
		case '*':printf("��Z�ł�\n"); break;
		case '/':printf("���Z�ł�\n"); break;
		case '%':printf("���܂�ł�\n"); break;
		default:printf("���̑��ł�\n"); 
	}
}