#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int cpu, pl;

	printf("何を出しますか？\n（1：グー ２：チョキ ３：パー）＞");
	scanf("%d", &pl);

	if (pl == 1)//swichで書いてもよき
	{
		printf("プレイヤーはグーです。\n");
	}
	if (pl == 2)
	{
		printf("プレイヤーはチョキです。\n");
	}
	if (pl == 3)
	{
		printf("プレイヤーはパーです。\n");
	}

	srand(time(0));
	cpu = rand() % 3 + 1;

	if (cpu == 1)
	{
		printf("コンピュータはグーです。\n");
	}
	if (cpu == 2)
	{
		printf("コンピュータはチョキです。\n");
	}
	if (cpu == 3)
	{
		printf("コンピュータはパーです。\n");
	}

	//プレイヤー勝ちパターン
	if ((pl == 1 && cpu == 2) || (pl == 2 && cpu == 3) || (pl == 3 && cpu == 1))
	{
		printf("プレイヤーの勝ちです。\n");
	}
	//プレイヤー負けパターン
	if ((pl == 1 && cpu == 3) || (pl == 2 && cpu == 1) || (pl == 3 && cpu == 2))
	{
		printf("プレイヤーの負けです。\n");
	}
	//あいこパターン
	if (pl == cpu)
	{
		printf("あいこです。\n");
	}
	//plとcpuの差を3で割ったあまりで考えてもよき(pl-cpu+3)%3;
}