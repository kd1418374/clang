#include<stdio.h>
main()
{
	int cnt, su;
	cnt = 0;
	printf("数を入れて：");
	scanf("%d", &su);

	while (cnt<su)
	{
		printf("*");
		cnt ++;
	}
}