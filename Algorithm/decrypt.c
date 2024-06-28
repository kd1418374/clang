#include<stdio.h>
main()
{
	char s[80];
	int i = 0;

	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢„");
	scanf("%s", &s);

	while (s[i] != '\0')
	{
		s[i]--;
		i++;
	}

	printf("•¡‡Ï‚İ•¶š—ñ‚ÍA%s\n", s);
}