#include<iostream>
#include<string>
#include<iomanip>
#include<time.h>
#include<ctime>
#pragma warning(disable : 4996).
using namespace std;

/*time_t rawtime;
  struct tm * timeinfo;
  char buffer[80];

  time (&rawtime);
  timeinfo = localtime(&rawtime);

  strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",timeinfo);
  std::string str(buffer);

  std::cout << str;
*/


int main()
{
	int num;

	menu();
	cin>>num;

	switch(num)
	{
	case 1:
cout<<"1- Add new use";
		break;
	case 2:
cout<<"2- Add new note";
		break;
	case 3:
cout<<"3- View notes for a specific user";
		break;
	case 4:
cout<<""4- Exit;

		break;

	default:
		cout<<"invalid choise"<<endl;
	}

	
	system("pause");
	return 0;
}
	
	system("pause");
	return 0;
}
