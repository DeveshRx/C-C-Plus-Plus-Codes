#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class employee
{
public:
	int age;
  char name[20];
  
  void accept()
  {
	printf("enter name & age");
	scanf("%d",&name);
  }
  void display()
  {
	printf("%d%d",&name,&age);
  }
};
void main()
{
  employee e;
  e.accept();
  e.display();
}