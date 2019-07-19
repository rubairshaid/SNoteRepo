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

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

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
