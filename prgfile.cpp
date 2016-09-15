#include<iostream.h>
#include<conio.h>
#include<fstream.h>
using namespace std;
class devesh
{
      public:
             void accept()
             {
                  ofstream file("deveshfile.html");
                  file<<"<html><title>Devesh</title><body>devesh web page</body></html>";
                  file.close();
                  cout<<"installiation complete";
                  }
                  };
                  int main()
                  {
                       devesh prg;
                       prg.accept();
                       getch();
                       return 0;
                       }
