#include<stdio.h>
main()
{
	int i=0;
	char data1[100], data2[100], data3[100];

	printf("������P����́F");
	scanf("%s", data1);
	printf("������2����́F");
	scanf("%s", data2);
	printf("moji1=%s\tmoji2=%s\n", data1, data2);

	/*while (data1[i] != '\0')
	{
		data3[i] = data1[i];
		i++;
	}
	data3[i] = '\0';
	i = 0;
	while (data2[i] != '\0')
	{
		data1[i] = data2[i];
		i++;
	}
	data1[i] ='\0';
	i = 0;
	while (data3[i] != '\0')
	{
		data2[i] = data3[i];
		i++;
	}
	data2[i]='\0';

	printf("����ւ����\nmoji1=%s\tmoji2=%s\n", data1, data2);*/
	printf("����ւ����\n");
	for (i = 0; data3[i] = data1[i]; i++);
	for (i = 0; data1[i] = data2[i]; i++);
	for (i = 0; data2[i] = data3[i]; i++);
	printf("moji1=%s\tmoji2=%s\n", data1, data2);
}