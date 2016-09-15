#include<stdio.h>
main()
{
	char a;
	int l,b,h,r1,r2,h1,h2;
	printf("_________________________________________\n\n\tMaths calculator-Volume\n\n\tVersion 1.1 Written by Devesh\n_________________________________________\nEnter your value & then select what you have to find\nenter length (press 'e' to skip if you dont want length).\n");
	scanf("%i",&l);
	fflush(stdin);

	printf("enter breath (press 'e' to skip if you dont want breath).\n ");
	scanf("%i",&b);
	fflush(stdin);
	
	printf("enter height (h1)(press 'e' to skip if you dont want radius).\n  ");
    scanf("%i",&h1);
	fflush(stdin);
	
	printf("enter height (h2)(press 'e' to skip if you dont want radius).\n  ");
	scanf("%i",&h2);
	fflush(stdin);

	printf("enter radius (r1) (press 'e' to skip if you dont want radius).\n");
	scanf("%i",&r1);
	fflush(stdin);

	printf("enter radius (r2) (press 'e' to skip if you dont want radius).\n");
	scanf("%i",&r2);
	fflush(stdin);

	printf("what you have to find\n a)volume of cuboid\n b)volume of cube\n c)volume of hemisphere(pie=22/7)\n d)volume of cylinder\n e)volume of cone\n f)volume of sphere\n g)volume of frustum of cone\n");
	scanf("%d",&a);
	fflush(stdin);
	{
		if(a='a')printf("%d",l*b*h1);
		else if(a='b')printf("%d",6*l*l*l);
		else if(a='c')printf("%d",2/3*22/7*r1*r1*r1);
		else if(a=='d')printf("%d",22/7*r1*r1*h1);
		else if(a=='e')printf("%d",1/3*22/7*r1*r1*h1);
		else if(a=='f')printf("%d",4/3*22/7*r1*r1*r1);
		else if(a=='g')printf("%d",1/3*22/7*r1*r1+r2*r2+r1*r2*h1);

			
	}
	printf("\n\tprogram is writen by Devesh");

	getch();
	

}