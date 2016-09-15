#include<stdio.h>
main()
{
	int pie,h,r1,r2,ans;
	printf("enter height,radius 1 &radius 2 of frustum of cone\n");
	scanf("%i%i%i",&h,&r1,&r2);
	fflush(stdin);
	ans=1/3*22/7*r1*r1+r2*r2+r1*r2;
	printf("volume= %i",ans);
	getch();
	return 0;

}