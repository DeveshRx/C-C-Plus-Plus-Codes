#include<stdio.h>
int main()
{
  char str_write[]="abcdefghij";
  char filename1[]="example.txt";
  int filedes,n;
  filedes=open(filename1,0);
  write(filedes,(char*)str_write,10);
  return 0;


}