#include<stdio.h>
main()
	{
	 int i,sum,num,cnt,pos_cnt;
	 for(cnt=0;cnt<10;cnt=cnt+1)
		 {
		 printf("enter a number, 0 to quit");
		 scanf("%d",&num);
		 fflush(stdin);
		 if(num==0)
			 break;
		 if(num<0)
			 continue;
		 sum=sum+num;
		 pos_cnt=pos_cnt+1;
		 }
	 printf("\nTotal number of entries made: %d",cnt);
	 printf("\nsum of %d positive number: %d",pos_cnt,sum);
	
	}