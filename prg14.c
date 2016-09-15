#include<stdio.h>
main()
	{
		
	float a[9];
	
	
	puts("--------------------------------------------\nWelcome to Devesh Element finder  Beta\n           Version 1.3\n-----------------------------------------------");
	puts("Enter element symbol or atomic number 2 times\n");
	a[9]=getchar();
	fflush(stdin);
	
	 
		{
		if (a[9]=='1' || a[9]=='h')puts("-----------------------------\nH\nHydrogen\n Atomic number=1\n Atomic mass=1.0\n-----------------------------\n");

		else if (a[9]=='2' || a[9]=='he')puts("-----------------------------\nHe\n helium\nAtomic number=2\nAtomic mass=4.0\n-----------------------------\n");
		

		else if (a[9]=='3' || a[9]=='li')puts("-----------------------------\nli\n lithium\n Atomic number=3\n Atomic mass=6.9\n-----------------------------\n");
		
		else if (a[9]=='4')puts("-----------------------------\nBe\n Beryllium\n Atomic number=4\n Atomic mass=9.0\n-----------------------------\n ");
		
		

		else if (a[9]=='5')puts("-----------------------------\nB\n Boron\n Atomic number=5\n Atomic mass=10.8\n-----------------------------\n");
		

		else if (a[9]=='6')puts("-----------------------------\nC\n Carbon\n Atomic number=6\n Atomic mass=12.0\n-----------------------------\n");
		

		else if (a[9]=='7')puts("-----------------------------\nN\n Nitrogen\n Atomic number=7\n Atomic mass=14.0\n-----------------------------\n");

	    else if (a[9]=='8')puts("-----------------------------\nO\n Oxygen\n Atomic number=8\n Atomic mass=16.0\n-----------------------------\n");

		else puts("-------------------------------------------------\nelement not found or invalid input\n-------------------------------------------------");
	   printf("press enter key to exit");
		
		a[9]=getchar();
		fflush(stdin);
		
		}
		
	
	
		}	