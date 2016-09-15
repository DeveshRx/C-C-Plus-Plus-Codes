#include<stdio.h>
main()
{
char name[100],un[30],pw[40];
	
int age[9];

printf("-------------------------------------\nWelcome to our registration form\n-------------------------------------\n 1/4) enter your name (max 29 character)");
name[100]=getchar();
fflush(stdin);

printf("2/4) enter your age (5-100)");
age[9]=getchar();
fflush(stdin);

printf("3/4) enter your user name (max 29 character)");
un[30]=getchar();
fflush(stdin);

printf("4/4) enter your password (max 39 character)");
pw[40]=getchar();
fflush(stdin);

printf("-----------------------------\nthank you for registration\n-----------------------------");

getch();
 exit();
return 0;
}