#include<stdio.h>
main()
{
	int a,sum=0, c, i = 0;

	printf("�����F");
	c = scanf("%d", &a);

	while (c != EOF)
	{
		sum += a;
		i++;
		printf("�����F");
		c = scanf("%d", &a);
	}

	/*printf("�����F);
	while(scanf("%d",&a)!=EOF)
	{
		sum += a;
		i++;
		printf("�����F");
	}*/
	
	/*printf("�����F);
	for(;scanf("%d",&a)!=EOF;)
	{
		sum += a;
		i++;
		printf("�����F");
	}*/

	printf("���v��%d\t���ρ�%.2f\n", sum, (float)sum / i);
}