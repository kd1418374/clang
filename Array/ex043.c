#include<stdio.h>
main()
{
	char data[] = "orange";
	int i = 0;
	printf("������F");

	while (data[i] != '\0')
	{
		printf("%c", data[i]);
		i++;
	}
	printf("\n�������� %d ����\n", i);
}