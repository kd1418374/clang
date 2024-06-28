#include<stdio.h>
main(int argc, char* argv[])
{
	int i, sum=0;
	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("合計：%d\n", sum);
		//printf("%s + %s = %d\n", argv[1], argv[2], atoi(argv[1]) + atoi(argv[2]));
	}

	else
	{
		printf("エラー\n");
	}
}