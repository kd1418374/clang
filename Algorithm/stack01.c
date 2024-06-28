#include<stdio.h>
#define STACKSIZE 8//�X�^�b�N�T�C�Y
int stack[STACKSIZE];//�X�^�b�N�̈�p�z��
int sp = 0;//�X�^�b�N�|�C���^�i�z��̓Y�����p�j

//�֐��v���g�^�C�v�錾
void display(void);
int push(int d);
int pop(int* pd);

//���C���֐�
main()
{
	int key, data, result;
	do 
	{
		printf("\n\n�v�b�V����i�A�|�b�v��o����͂��ā�");
		key = getche();
		printf("\n");

		//�v�b�V������
		if (key == 'i')
		{
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = push(data);
			if (result == -1)
			{
				printf("\n�������X�^�b�N����t�ł�������\n");
			}
			else
			{
				display();
			}
		}

		//�|�b�v����
		if(key=='o')
		{
			result = pop(&data);
			if (result == 1)
			{
				printf("�������X�^�b�N����ł�������");
			}
			else
			{
				printf("�X�^�b�N����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}

//�X�^�b�N�\���֐�
void display(void)
{
	int i;
	printf("\n���������݂̃X�^�b�N�̓��e������\n");
	for (i = 0; i < STACKSIZE; i++)
	{
		printf("stack[%2d]��%5d", i, stack[i]);
		if (i == sp)
		{
			printf("��sp�������Ă��鏊(����sp��%d)", sp);//�m�F�p
		}
		printf("\n");
	}
	return;
}

//�v�b�V���֐�
int push(int d)
{
	if (sp >= STACKSIZE)
	{
		return -1;
	}
	stack[sp] = d;
	sp++;
	return 0;
}

int pop(int* pd)
{
	if (sp<=0)
	{
		return 1;
	}
	sp--;
	*pd = stack[sp];

	stack[sp] = 0;
	return 0;
}
