#include<fstream.h>
#include<conio.h>
using namespace std;
class Install 
{
public:
	void prg()
	{
		ofstream file("file.txt");
		file<<"devesh";
		file.close();
	}
};
void main()
{
	Install i;
	i.prg();
	getch();
}