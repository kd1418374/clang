#include<stdio.h>
main()
{
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	int i, s;

	printf("’Tõ’l‚ð“ü—Í„");
	scanf("%d", &s);

	d[10] = s;
	i = 0;

	while (s != d[i])
	{
		i++;
	}
	
	if (i >= 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}

	else
	{
		printf("”z—ñ%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½\n", i);
	}
}