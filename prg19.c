#include<stdio.h>
#include<conio.h>
int main()
{
 char str_read[100];
 char filename[]="example.txt";
 int filedes;
 filedes=open(filename,o_rdonly,0);
 read(filedes,(char*)str_read,5);
 str_read[5]='\0';
 printf("the string is= %s.\n",str_read);
 close(filedes);
 return 0;

}