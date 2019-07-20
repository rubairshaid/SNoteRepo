#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
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

void menu ()
{
	cout<<"Welcome to the brand new “Sticky Notes”!"<<endl;
	cout<<"Here is the list of operation this program offers:"<<endl;
	cout<<"1- Add new user"<<endl;
	cout<<"2- Add new note "<<endl;
    cout<<"3- View notes for a specific user "<<endl;
    cout<<"4- Exit"<<endl;




}
int main()
{
	int num;char ch;
	string Fname,Lname;
	menu();
	cin>>num;
	ifstream fin;
	ofstream fout;

	switch(num)
	{
	case 1:
		system("cls");
		cout <<"Welcome aboard new user!"<<endl;
		cout<<"Please let me know your first name: ";
		cin>>Fname;
		cout<<"Great "<<Fname<<", now please enter your last name: ";
		cin>>Lname;
		cout<<"Done!"<<endl;
		cout<<"Nice to meet you "<<Fname<<" "<<Lname<<endl;
		cin.get(ch);
		Fname+=Lname; 
		fout.open(Fname);
		fout<<""<<endl;
		fout.close();
		cin.get(ch);
		system("cls");
		menu();
		break;
	case 2:
 system("cls");
		    cout << "Please enter your full name "<<endl;
			cout<<"first Name :  ";
			cin >> Fname;
			cout << "Last Name :   ";
			cin>>Lname;
			cout << " full name :" << Fname <<" "<< Lname<<endl;
			fin.open( Fname);
			if (fin.is_open()) {
			
				cout << "Your record is found, I’m now opening your file …."<<endl;
				cout << "Ready!";
				cin.get(ch);
				Fname += Lname;
				fin.open(Fname);
				cout << "Please enter your note:";
				
			
			}
			
			
			system("cls");
			menu();
			
			
			
			
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
