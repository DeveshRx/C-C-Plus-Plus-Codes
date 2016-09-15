#include<stdio.h>
main()
{
	int h,p,l,ans;
	printf("enter Length");
	l=getchar();
	fflush(stdin);
	printf("enter perpendicular");
	p=getchar();
	fflush(stdin);
	ans=l*l+p*p;
	printf("hypotenuse= %i",ans);
	getch();
	return 0;

}