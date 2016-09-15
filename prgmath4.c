#include<stdio.h>
main()
{
	char a;
	int l,b,r1,r2,h1,h2,l2,l3;
	printf("_____________________________________________________________\n\n\tMaths calculator-surface area & Volume 22/7\n\tCopyright\n\tVersion 1.2 Beta Written by Devesh\n_____________________________________________________________\n");
	printf("\nPress enter to start,press 'h' for help & 'a' for about\n");
	scanf("%c",&a);
	if(a=='h')printf("\t\n\t__________\n\t   Help\n\t----------\nHelp-how to use this program?\n\nStep 1-first enter values of length,breath,height,etc.You can press 'e' to skip that option\nStep 2-select options given below after you have entered values & you will get the answer\n\nLearn more:\n\nMaths calculator is a software that can calculate surface area & volume of almost any solid.22/7 means that this software calculate value of pie as 22/7,if you want pie as 3.14 it is available.This is on beta stage,so it may calculate your answer wrong but dont worry this software calculation is 99.5 persentage Right.\n\n");
	else if(a=='a')printf("\n\t__________\n\t   About\n\t----------\n\n\tMaths calculator-surface area & Volume 22/7\n\tCopyright\n\tVersion 1.2 Beta Written by Devesh\n\n");
	printf("_______________________________________________________________________________\n\n");
	printf("Enter your value & then select what you have to find\n\nenter length (press 'e' to skip if you dont want length).\n");
	scanf("%i",&l);
	fflush(stdin);
	
	printf("enter breath (press 'e' to skip if you dont want breath).\n");
	scanf("%i",&b);
	fflush(stdin);
	
	printf("enter height (h1)(press 'e' to skip if you dont want radius).\n");
    scanf("%i",&h1);
	fflush(stdin);
	
	printf("enter height (h2)(press 'e' to skip if you dont want radius).\n");
	scanf("%i",&h2);
	fflush(stdin);

	printf("enter radius (r1) (press 'e' to skip if you dont want radius).\n");
	scanf("%i",&r1);
	fflush(stdin);

	printf("enter radius (r2) (press 'e' to skip if you dont want radius).\n");
	scanf("%i",&r2);
	fflush(stdin);

	printf("what you have to find? choose from following list\nCuboid:\na)volume of cuboid\t\t\tb)surface area of cuboid\n\ncube:\nc)surface area of cube\t\t        d)volume of cube\n\nCylinder:\ne)volume of cylinder\t\t\tf)Curved surface area of cylinder\ng)Total surface area of cylinder\n\nCone:\nh)curved surface area of cone\t\ti)Total surface area of cone\nj)Volume of cone\n\nSphere:\nk)surface area of sphere\tl)volume of sphere\n\nHemisphere:\nm)curved surface area of hemisphere\tn)total surface area of hemisphera\no)volume of hemisphere\n\nFrustum of cone:\np)volume of frustom of cone\tq)CSA of frustum of cone\nr)tsa of frustum of cone\n");
	scanf("%d",&a);
	fflush(stdin);
	l2=r1*r1+h1*h1;
	l3=h1*h1+r1*r1-r2*r2;
	{
		if(a='a')printf("____________________\nAnswer is %d \n--------------------\n\n",l*b*h1); 
		else if(a='b')printf("____________________\nAnswer is %d \n--------------------\n\n",2*l*b+b*h1+h1*l);
		else if(a='c')printf("____________________\nAnswer is %d \n--------------------\n\n",6*l*l); 
		else if(a=='d')printf("____________________\nAnswer is %d \n--------------------\n\n",l*l*l);
		else if(a=='e')printf("____________________\nAnswer is %d \n--------------------\n\n",22/7*r1*r1*h1);
		else if(a=='f')printf("____________________\nAnswer is %d \n--------------------\n\n",2*22/7*r1*h1);
		else if(a=='g')printf("____________________\nAnswer is %d \n--------------------\n\n",2*22/7*r1*r1+h1);
		else if(a=='h')printf("____________________\nAnswer is %d \n--------------------\n\n",22/7*r1*l2);
		else if(a=='i')printf("____________________\nAnswer is %d \n--------------------\n\n",22/7*r1*l2);
		else if(a=='j')printf("____________________\nAnswer is %d \n--------------------\n\n", 1/3*22/7*r1*r1*h1);
		else if(a=='k')printf("____________________\nAnswer is %d \n--------------------\n\n",4*22/7*r1*r1);
		else if(a=='l')printf("____________________\nAnswer is %d \n--------------------\n\n",4/3*22/7*r1*r1*r1);
		else if(a=='m')printf("____________________\nAnswer is %d \n--------------------\n\n",2*22/7*r1*r1);
		else if(a=='n')printf("____________________\nAnswer is %d \n--------------------\n\n",3*22/7*r1*r1);
		else if(a=='o')printf("____________________\nAnswer is %d \n--------------------\n\n",2/3*22/7*r1*r1*r1);
		else if(a=='p')printf("____________________\nAnswer is %d \n--------------------\n\n",1/3*22/7*r1*r1+r2*r2+r1*r2*h1);
		else if(a=='q')printf("____________________\nAnswer is %d \n--------------------\n\n",22/7*r1*r2*l3);
		else if(a=='r')printf("____________________\nAnswer is %d \n--------------------\n\n",22/7*r1+r2*l3+22/7*r1*r1+22/7*r2*r2);
		else printf("invalid");
			
	}
	printf("press enter to exit\n\n\n\tprogram is writen by Devesh");

	getch();
	
	exit();
}