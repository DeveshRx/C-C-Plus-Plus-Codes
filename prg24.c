#include<io.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
int main(void)
{
  long length;
  int fh;
  char buffer[20];
  
  memset(buffer,'\0',20);
  if(-1==(fh=open("d.txt",O_RDWR|O_APPEND)))
  {
	perror("Key file missing");
	exit(EXIT_FAILURE);
  }
  printf("Key file found:\n%s.\n",buffer);
  close(fh);
  return 0;
  }
