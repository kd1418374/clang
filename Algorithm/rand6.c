#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int cpu, pl;

	printf("�����o���܂����H\n�i1�F�O�[ �Q�F�`���L �R�F�p�[�j��");
	scanf("%d", &pl);

	if (pl == 1)//swich�ŏ����Ă��悫
	{
		printf("�v���C���[�̓O�[�ł��B\n");
	}
	if (pl == 2)
	{
		printf("�v���C���[�̓`���L�ł��B\n");
	}
	if (pl == 3)
	{
		printf("�v���C���[�̓p�[�ł��B\n");
	}

	srand(time(0));
	cpu = rand() % 3 + 1;

	if (cpu == 1)
	{
		printf("�R���s���[�^�̓O�[�ł��B\n");
	}
	if (cpu == 2)
	{
		printf("�R���s���[�^�̓`���L�ł��B\n");
	}
	if (cpu == 3)
	{
		printf("�R���s���[�^�̓p�[�ł��B\n");
	}

	//�v���C���[�����p�^�[��
	if ((pl == 1 && cpu == 2) || (pl == 2 && cpu == 3) || (pl == 3 && cpu == 1))
	{
		printf("�v���C���[�̏����ł��B\n");
	}
	//�v���C���[�����p�^�[��
	if ((pl == 1 && cpu == 3) || (pl == 2 && cpu == 1) || (pl == 3 && cpu == 2))
	{
		printf("�v���C���[�̕����ł��B\n");
	}
	//�������p�^�[��
	if (pl == cpu)
	{
		printf("�������ł��B\n");
	}
	//pl��cpu�̍���3�Ŋ��������܂�ōl���Ă��悫(pl-cpu+3)%3;
}