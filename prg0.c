#include<stdio.h>
#include<conio.h>
void main()
	{		
	char ch;
	printf("welcome to Devesh  online market\n");
    printf("what do you want to do -"); 
	printf("Buy a car, press A.\n"); 
	printf("buy a mobile, press B.\n");
	ch=getchar();
	fflush(stdin);
	switch(ch)
		{
case 'a' : puts("select mobile:\n");
	{	 
	char a;
		puts("A)Nokia E7 (Rs34,0000)\n B)Samsung google nexus s (Rs 25,0000)\n C)dell venue (40,0000)\n");
		a=getchar();
		if(a=='a'||a=='A')
			{
			printf("you have selected Nokia E7 of price Rs 34,0000");
				{
			int num,num2;
			puts("Enter Bank account number");
			num=getchar();
			Puts("Enter password");
			num2=getchar();
			puts("thank u for buying Nokia E7");
			}
			}
		else if (a=='b' || a=='B')
			
			{
			puts("you have selected Samsung google nexus s of price Rs 25,0000\n");
				{
			int acc,pass;
			puts("Enter Bank account number");
			acc=getchar();
			Puts("Enter password");
			pass=getchar();
			puts("thank u for buying samsung google nexus s");
			}
			}
		else if(a=='c'||a=='C')
			
				{
				puts("you have selected Dell venue of price Rs 40,0000\n");
					{
				int acc,pass;
			puts("Enter Bank account number");
			acc=getchar();
			Puts("Enter password");
			pass=getchar();
			puts("thank u for buying Dell venue");
			}
				}
					
		
		}
	break;				  
	case 'b' : puts("Select a Car\n");
		{
		char c;
	puts("A) BMW X6 (Rs 78,00000\n B) Mercedise Benz (Rs 69,00000)\n C) BMW 6-series convertable (Rs 96,00000)\n D) Audi A8 (Rs 82,00000)\n E) Ferrari 355 (Rs 3.4,00,00000)\n F) Ferrari F40 (Rs 5.9,00,00000)\n");
		{
	if(c=='a')puts("you have selected BMW X6 of price Rs 78,00000\n");
		{		
		int acc,pass;
			puts("Enter Bank account number");
			acc=getchar();
			Puts("Enter password");
			pass=getchar();
			puts("thank u for buying BMW X6");
			}
		 
		
	else if(c=='b')puts("you have selected Mercides Benz of price Rs 69,00000\n");
			{
					
		int acc,pass;
			puts("Enter Bank account number");
			acc=getchar();
			Puts("Enter password");
			pass=getchar();
			puts("thank u for buying Mercides Benz");
		}
		 else if(c=='c')puts("you have selected BMW 6-series convertable of price Rs 96,00000\n");
			{
		int acc,pass;
			puts("Enter Bank account number");
			acc=getchar();
			Puts("Enter password");
			pass=getchar();
			puts("thank u for buying BMW 6-series convertable");
			}
			}
			 
			else if(c=='d') puts("you have selected Audi A8 of price Rs 82,00000");
			{	
		int acc,pass;
			puts("Enter Bank account number");
			acc=getchar();
			Puts("Enter password");
			pass=getchar();
			puts("thank u for buying Audi A8 ");
		}
			
	 else if(c=='e')puts("you have selected Ferrari 355 of price Rs 5.4,00,000000\n");
			{	
		int acc,pass;
			puts("Enter Bank account number");
			acc=getchar();
			Puts("Enter password");
			pass=getchar();
			puts("thank u for buying Ferrari 355");
			}
			
	 else if(c=='f')puts("you have selected Ferrari F40 of price Rs 5.9,00,00000\n");
			{	
		int a,p;
			puts("Enter Bank account number");
			a=getc(stdin);
			Puts("Enter password");
			p=getchar();
			puts("thank u for buying Ferrari F40");
			}
			}
		
	
		}
		}
		

	
		
		
	
		
		
		