#include<stdio.h>
int strcnt(char* p);				/*�v���g�^�C�v�錾*/
main()
{
	char buf[256];
	int mojisu;
	printf("������H:");
	gets(buf);						/*�L�[�{�[�h���當��������*/
	mojisu = strcnt(buf);			/*�֐�strcnt�̌Ăяo��*/
	printf("���͂��ꂽ������̕�������%d�ł��B\n", mojisu);
}

int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return(cnt);
}