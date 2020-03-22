#include <iostream>
#include <map>
#include<windows.h>
#include "contacts.h"
#include "game.h"
#include "calc.h"
#include "calendar.h"
#include "time.h"
using namespace std;

int main()
{
		for(int i=0;i<6;i++)
	{
		Sleep(700);
		system("cls");
		cout<<"\n\n\n\t\t\t\t\aLoading";
		Sleep(100);
		cout<<".";
		Sleep(100);
		cout<<".";Sleep(100);
		cout<<".";
		
	}

contacts c;
notes n;
int choice;

while(1)
{	
system("cls");
for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
    cout << "\t\t\t\tMAIN MENU\n\n";
  for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
	cout<<"\n1.Contacts\t\t\t2.Game\n\n3.Calculator\t\t\t4.Calendar\n\n5.Time   \t\t\t6.Exit\n\nEnter your choice"<<endl;
cin>>choice;
switch(choice)
{
	case 1:c.discon();break;
	case 2:game();break;
	case 3:calc();break;
	case 4:n.calender();break;
	case 5:time();break;
	case 6:		for(int i=0;i<6;i++)
			{
			Sleep(700);
			system("cls");
			cout<<"\n\n\n\t\t\t\t\t\t\aClosing";
			Sleep(100);
			cout<<".";
			Sleep(100);
			cout<<".";Sleep(100);
			cout<<".";
		
	}
system("cls");
	cout<<"\n\n\n\n\t\t\t\tBYE :)\n\n\n\n\n\n\n\t\t\t\t\t\tBY\n\t\t\t\t\t\tSILAMBARASAN\n\t\t\t\t\t\tHARIKRISHNAN\n";system("pause");return 0; break;

}

}




return 0;
} 
