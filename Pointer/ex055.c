#include<stdio.h>
main()
{
	int i, a[6] = { 11,22,33,44,55,66 }, * p_a;
	float b[4] = { 11.1, 22.2, 33.3, 44.4 }, * p_b, sum, ave;

	//p_aへa配列の先頭アドレスを入れる
	p_a = a;
	//p_bへb配列の先頭アドレスを入れる
	p_b = b;

	for (sum=0,i = 0;i<6 ; i++)//データ数分ループする
	{
		sum += *p_a;
		p_a++;
	}
	ave = sum / i;
	printf("配列a 合計 = %.0f\t平均 = %.3f\n",sum,ave);

	for (sum = 0, i = 0; i < 4; i++)
	{
		sum += *p_b;
		p_b++;
	}
	ave = sum / i;
	printf("配列a 合計 = %.3f\t平均 = %.3f\n", sum, ave);
}