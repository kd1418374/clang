#include<stdio.h>
main()
{
	char data[] = "orange";
	int i = 0;
	printf("文字列：");

	while (data[i] != '\0')
	{
		printf("%c", data[i]);
		i++;
	}
	printf("\n文字数は %d 文字\n", i);
}