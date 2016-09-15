#include<stdio.h>
char books [] [40]={
	"little wonder of don camillo",
	"to kill a mockingbird",
	"my family amd other animals",
	"london bridge is falling",
	};
main()
	{
   int num;
   printf("\n enter a semister number (between 1-6)");
   scanf("%d",&num<=6);
   fflush(stdin);
   if(num>=1&&num<=6)
	   {
	   num--;
	   printf("your book for this semister is %s",books[num]);
	   }
   else
	   printf("\n wroig semister !");

	
	
	}