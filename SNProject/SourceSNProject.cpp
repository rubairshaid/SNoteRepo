 #include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<time.h>
#include<ctime>
#pragma warning(disable : 4996).
using namespace std;



void menu ()
{
	cout<<"Welcome to the brand new â€œSticky Notesâ€!"<<endl;
	cout<<"Here is the list of operation this program offers:"<<endl;
	cout<<"1- Add new user"<<endl;
	cout<<"2- Add new note "<<endl;
    cout<<"3- View notes for a specific user "<<endl;
    cout<<"4- Exit"<<endl;




}
int main()
{
	int num;char ch;
	string Fname,Lname,note;
	menu();
	ifstream fin;
	ofstream fout;

	time_t rawtime;
  struct tm * timeinfo;
  char buffer[80];

  

  while(cin>>num )
  {


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
			cout<<"Let’s add a new note ..."<<endl;
		    cout << "Please enter your full name first:  ";
			cin >> Fname;
			cin>>Lname;
			Fname+=Lname;
			fin.open( Fname);
			if(!fin)
			{
				cout<<"Oh! Sorry the user name was not found, please check the name again and if this is your first time here, please go ahead and create a new user from the main menu ..."<<endl;
				cin.get(ch);
				menu();
			}
			else {
			
				cout << "Your record is found, I’m now opening your file …."<<endl;
				cout << "Ready!"<<endl;
				cout<<"Please enter your note:"<<endl;
				cin.get(ch);
				getline(cin,note);
				cout<<"##"<<endl;
				cout<<endl;
				cout<<"Your note has been well received, 1 second while saving it …."<<endl;
				fin.close();
				ofstream  fout(Fname, ios_base::out | ios_base::app );

				time (&rawtime);
                timeinfo = localtime(&rawtime);

                strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",timeinfo);
                std::string str(buffer);

                fout << str<<endl;
				fout<<note<<endl;
				fout<<endl;
				cout<<"Done!"<<endl;
				fout.close();
				cin.get(ch);
				menu();
			
			}
			
		break;
	case 3:

		break;
	case 4:
		return ;	
		break;

	default:
		cout<<"invalid choise"<<endl;
	}

  }
	system("pause");
	return 0;
}
