#include<stdio.h>
int gokei(int a, int b,int c);
float heikin(float sum);
main()
{
	int a, b, c, sum;
	float ave;
	printf("整数を3つ入力：");
	scanf("%d%d%d", &a, &b, &c);
	sum = gokei(a, b, c);
	ave = heikin(sum);
	printf("合計は %d、平均は %.2f\n", sum, ave);
}

int gokei(int a, int b, int c)
{
	int ans;
	ans = a + b + c;
	return(ans);
}

float heikin(float sum)
{
	float ans;
	ans = sum / 3.0;
	return(ans);
}