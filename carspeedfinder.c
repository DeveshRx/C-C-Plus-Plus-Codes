#include<stdio.h>
int main()
{
	float num1,num2,sum;
	printf("---------------------------------\nDevesh car speed finder\nprograme is on beta stage\n---------------------------------\n");

puts("enter Distance & time of your car");
num1=getc(stdin);
fflush(stdin);
num2=getc(stdin);
fflush(stdin);
sum=num1*num2;
printf("your speed of your car is %f km/h\n",sum);
printf("\n\n\n--------------------\npress enter to exit\n--------------------\n");
num1=getchar();
fflush(stdin);
	
}