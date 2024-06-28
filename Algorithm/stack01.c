#include<stdio.h>
#define STACKSIZE 8//スタックサイズ
int stack[STACKSIZE];//スタック領域用配列
int sp = 0;//スタックポインタ（配列の添え字用）

//関数プロトタイプ宣言
void display(void);
int push(int d);
int pop(int* pd);

//メイン関数
main()
{
	int key, data, result;
	do 
	{
		printf("\n\nプッシュはi、ポップはoを入力して＞");
		key = getche();
		printf("\n");

		//プッシュ処理
		if (key == 'i')
		{
			printf("データ入力＞");
			scanf("%d", &data);
			result = push(data);
			if (result == -1)
			{
				printf("\n※※※スタックが一杯です※※※\n");
			}
			else
			{
				display();
			}
		}

		//ポップ処理
		if(key=='o')
		{
			result = pop(&data);
			if (result == 1)
			{
				printf("※※※スタックが空です※※※");
			}
			else
			{
				printf("スタックからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}

//スタック表示関数
void display(void)
{
	int i;
	printf("\n＝＝＝現在のスタックの内容＝＝＝\n");
	for (i = 0; i < STACKSIZE; i++)
	{
		printf("stack[%2d]は%5d", i, stack[i]);
		if (i == sp)
		{
			printf("←spが示している所(現在spは%d)", sp);//確認用
		}
		printf("\n");
	}
	return;
}

//プッシュ関数
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
