#include<iostream.h>
#include<fstream.h>
int main()
{
char a[10000];
    ofstream file("New file.txt");
    cin>>a;
    file<<a<<"\n";
 
    
    return 0;
}
