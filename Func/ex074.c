#include<stdio.h>
void display1(int n1);/*�v���g�^�C�v�錾�l�n��*/
void display2(int* n2);/*�v���g�^�C�v�錾�A�h���X�n��*/
main()
{
	int a, b;
	printf("���la�H: ");
	scanf("%d", &a);
	display1(a);/*�֐�display1�̌Ăяo��*/
	printf("a = %d\n\n", a);
	printf("���lb�H: ");
	scanf("%d", &b);
	display2(&b);/*�֐�display2�̌Ăяo��*/
	printf("b = %d\n\n", b);
}

/*�֐�display1�̋L�q*/
void display1(int n)
{
	printf("���l�́A%d�ł��B\n", n);
	n += 10;
	return;
}

/*�֐�display2�̋L�q*/
void display2(int* n)
{
	printf("���lb�́A%d�ł��B\n", *n);
	*n += 10;
	return;
}