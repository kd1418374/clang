#include<stdio.h>
main()
{
	int i, a[6] = { 11,22,33,44,55,66 }, * p_a;
	float b[4] = { 11.1, 22.2, 33.3, 44.4 }, * p_b, sum, ave;

	//p_a��a�z��̐擪�A�h���X������
	p_a = a;
	//p_b��b�z��̐擪�A�h���X������
	p_b = b;

	for (sum=0,i = 0;i<6 ; i++)//�f�[�^�������[�v����
	{
		sum += *p_a;
		p_a++;
	}
	ave = sum / i;
	printf("�z��a ���v = %.0f\t���� = %.3f\n",sum,ave);

	for (sum = 0, i = 0; i < 4; i++)
	{
		sum += *p_b;
		p_b++;
	}
	ave = sum / i;
	printf("�z��a ���v = %.3f\t���� = %.3f\n", sum, ave);
}