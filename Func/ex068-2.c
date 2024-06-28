#include<stdio.h>
main()
{

	char a[256], * b;

	printf("•¶š—ñ‚ğ“ü—Í„");
	b = gets(a);

	while (b != NULL)
	{
		printf("“ü—Í‚³‚ê‚½‚Ì‚Í%s\n",b);
		printf("•¶š—ñ‚ğ“ü—Í„");
		b = gets(a);
	}
}