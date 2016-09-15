#include<stdio.h>
main()
	{
	int num;
	puts("enter any number 0-10");
	num=getchar();
	fflush(stdin);
	if(num=='2'||num=='4'||num=='6'||num=='8'||num=='10')
		puts("number is even");
	else
		puts("it is an odd number");
	}