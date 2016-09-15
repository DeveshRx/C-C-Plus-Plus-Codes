  #include<io.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
int main()
{
  char str_write[]="abcdefghfgfgf";
  char filename[]="example.txt";
  int filedes,n, buffer[20];
  
   memset(buffer,'\0',20);
  filedes=open("example.txt",O_RDONLY|O_WRONLY);
  {
	perror("Key file found");
	printf("%s",buffer);
	 
	exit(EXIT_FAILURE);
  }
   close(filedes);

	
	return EXIT_FAILURE;
  
}
