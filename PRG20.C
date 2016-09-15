#include<stdio.h>
#include<conio.h>
main()
{
int num1,num2;
char o;
printf("enter 2 numbers and an operator \n");
scanf("%d%d%c",&num1,&num2,&o);
fflush(stdin);
calc(num1,num2,o);
return 0;
}
calc(val1,val2,oper)
int val1,val2;
char oper;
{
switch(oper)
{
case'+':printf("%d",val1+val2);
break;
case'-':printf("%d",val1-val2);
break;
case'*':printf("%d",val1*val2);
break;
case'/':printf("%d",val1/val2);
break;
default:printf("invalid");
}
return 0;
}
