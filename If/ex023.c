#include<stdio.h>
main()
{
	int s, m, h;
	printf("�b�������:");
	scanf("%d", &s);

	if (s <= 5000)//�}�C�i�X�͓��͂���Ȃ����̂Ƃ���
	{
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%d���� %d�� %d�b\n",h,m,s);

	}
	else
	{
		printf("�G���[:���͂�5000�܂�\n");
	}
}