#include<stdio.h>
main()
	{
	char strl[50];
	int times;
	for(times=0;times<10;times=times+1)
		{
		puts("enter string");
		gets(strl);
		fflush(stdin);
		puts(strl);
		}
	}