#include<stdio.h>
main()
{
char inp;
puts ("enter grade");
inp=getchar();
fflush(stdin);
if(inp=='a')
puts("46");
else
puts("invalid");
}