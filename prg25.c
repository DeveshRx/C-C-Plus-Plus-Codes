#include<stdio.h>
main()
{
  int a1;
  char a2;
  printf("enter key");
  scanf("%d%d",&a1,&a2);
  fflush(stdin);
  if(a1=='1' && a2=='a') printf("devesh");
  else printf("invalid");
  return 0;
}