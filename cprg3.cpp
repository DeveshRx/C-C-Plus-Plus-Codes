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
  if(-1==(fh=open("d.txt",O_RDWR|O_APPEND|O_CREAT)))
  {
	perror("Key file missing");
	exit(EXIT_FAILURE);
  }
  
  if(12 !=read(fh,buffer,12))
  {
	perror("unable to open key file.key file may damaged");
	close(fh);
	return EXIT_FAILURE;
  }
  printf("sucess:\n%s.\n",buffer);
 
  close(fh);
  fh=getchar();
  return 0;
}
