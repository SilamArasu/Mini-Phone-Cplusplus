#include <iostream>
#include <cstring> 
#include <cstdlib> 
#include <ctime>
#include <fstream>
#include<windows.h>
using namespace std;
const char * Month[] = { "", "January","Febraury","March","April","May","June","July","August","September","October","November","December" };
class notes
{
public:
int date,mnth,year;
string n;
notes *next,*start;
notes()
{
start=NULL;next=NULL;
}
int calender();
void calen();
void create();
void view();
void search();

};
void notes :: calen()
{
int i,count=0,mon,yr,m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
cout <<"\n Enter year:";
cin >>yr;
cout <<"\n Enter month:";
cin >>mon;
for(i=1900;i<yr;i++)
{
if(i%4==0&&i%100!=0||i%400==0)
count+=366;
else
count+=365;
}
if(yr%4==0&&yr%100!=0||yr%400==0)
m[1]=29;
for(i=0;i<mon-1;i++)
count+=m[i];
count%=7;
cout <<"\n\t\t"<<Month[mon]<<","<<yr<<endl;
cout <<"\n MON\t TUE\t WED\t THU\t FRI\t SAT\t SUN\n";
for(i=0;i<count;i++)
cout <<"\t";
for(i=1;i<=m[mon-1];i++,count++)
{
if(count%7==0)
cout <<"\n";
cout <<i <<"\t";
}

}
void notes :: create()
{
notes *ptr, *node; 
int d1,d2,d3;string s; 
cout <<"\n Enter date,month and year:";
cin >>d1>>d2>>d3;
cout <<"\n Enter notes:";
cin.ignore(); 
getline(cin, s);
node= new notes; 
node->date= d1; 
node->mnth= d2;
node->year= d3;
node->n=s;
if(start==NULL)
start=node;
else
{
ptr = start; 
while(ptr->next != NULL) 
ptr = ptr->next; 
ptr->next = node;  
}
}
void notes :: view()
{
notes *ptr; 
ptr = start; 
cout <<"\n";
if(start==NULL)
{
	cout <<"\n No notes found.\n";
} 
else
{
while(ptr != NULL) 
{ 
cout <<"Date:" <<ptr->date<<"-"<<ptr->mnth<<"-"<<ptr->year<<"\n Notes:"<<ptr->n<<endl; 
ptr = ptr->next; 
}
}
}
void notes :: search()
{
int sd1,sd2,sd3;
notes *ptr=start;
if(start==NULL)
cout <<"\n No notes found.\n";
else
{
cout <<"\n Enter date,month and year:";
cin >>sd1>>sd2>>sd3;
while((ptr->date!=sd1)&&(ptr->mnth!=sd2)&&(ptr->year!=sd3)&&(ptr->next!=NULL))
ptr=ptr->next;
if((ptr->date==sd1)&&(ptr->mnth==sd2)&&(ptr->year==sd3))
cout <<"Date:" <<ptr->date<<"-"<<ptr->mnth<<"-"<<ptr->year<<"\n Notes:"<<ptr->n; 
else
cout <<"\n No notes found in the date.\n";
}
}
int notes :: calender()
{
	
	int option;
	
	while(1){
		system("cls");
for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
    cout << "\t\t\t\tCALENDAR\n\n";

  for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
            string a,b="home";
cout<<"\ntype home to main menu  ";
cin>>a;
if(a==b){return 0;} 
		cout <<"\n 1.View calender 2.Create notes 3.View notes 4.Search notes 5.Exit \n";
	cout <<"\n Enter option:";
	cin >>option;
	switch(option)
	 {
		case 1:calen();cout<<"\n";system ("PAUSE");break;
		case 2:create();cout<<"Success!!"<<endl;system ("PAUSE");break;
		case 3:view();cout<<"\n";system ("PAUSE");break;
		case 4:search();cout<<"\n";system ("PAUSE");break;
		case 5:calender();return 0; break;
	 }
    }
}


