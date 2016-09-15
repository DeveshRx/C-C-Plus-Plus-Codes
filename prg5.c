#include<stdio.h>
main()
{
char str[10],inp;
puts("enter number of times to display a string (0-9)");
inp=getchar();
fflush(stdin);
puts("enter string to display");
gets(str);
switch(inp)
{
case'9':puts(str);
case'8':puts(str);
case'7':puts(str);
case'6':puts(str);
case'5':puts(str);
case'4':puts(str);
case'3':puts(str);
case'2':puts(str);
case'1':puts(str);
case'0':break;
	}
	}