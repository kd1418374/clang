#include<stdio.h>
main()
{
	int i = 0;
	char data[] = "Apple";

	printf("1�������\��\n");

	while (data[i] != '\0')
	{
		printf("%c", data[i]);
		i++;
	}
	printf("\n������ŕ\��\n%s\n",data);
}