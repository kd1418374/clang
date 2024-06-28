#include<stdio.h>
main()
{
	int s, m, h;
	printf("秒数を入力:");
	scanf("%d", &s);

	if (s <= 5000)//マイナスは入力されないものとする
	{
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%d時間 %d分 %d秒\n",h,m,s);

	}
	else
	{
		printf("エラー:入力は5000まで\n");
	}
}