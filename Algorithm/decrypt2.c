#include<stdio.h>
main()
{

	char s[20];
	int i, no;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢„");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]‚ÌˆÃ†‰»ƒL[„", i);
		scanf("%d", &no);
		s[i] = s[i] - no;
	}

	printf("•¡‡‰»Ï‚İ•¶š—ñ‚ÍA%s\n", s);
}