#include<stdio.h>
main()
{
	int num, sum;
	sum = 0;

	//�������[�v
	while (1)
	{
		printf("�������āF");
		scanf("%d", &num);
		//break���Ăяo��
		if (num == -999) { break; }

		//���Z
		sum += num;
		
	}
	printf("���v = %d\n", sum);
}