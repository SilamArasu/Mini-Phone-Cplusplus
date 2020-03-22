#include<iostream>
#include <map>
using namespace std;

class contacts
{
public:
string name,s;
double item;
int choice;   
int che,i;
map<string,double> mp;               
map<string,double>::iterator it;
contacts()
{   che=1;
	mp.insert(pair<string,double>("A",922843571));
	mp.insert(pair<string,double>("B",944936387)); 		}
void display();
void con(); 
int discon();
};
int contacts::discon()
{
    display();
    string a,b="home";
cout<<"\ntype home to main menu or any key to proceed ";
cin>>a;
if(a==b){return 0;} 
con();
}
 void contacts::display()
 {
cout.precision(10);system("cls");
for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
    cout << "\t\t\t\tCONTACTS\n\n";
  for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
for (it = mp.begin(); it != mp.end(); it++)
        cout <<"\t"<< (*it).first << "\t\t" << (*it).second << endl;
     }
void contacts::con(){
   while (1)
    {
        
    cout<<"\nOPTIONS:\n1.Insert contact\n2.Delete contact\n3.Search contact\n4.Edit\n5.Exit\nEnter your Choice:"<<endl;
     cin>>choice;
    switch(choice)
    {
    	case 1:cout<<"Enter the Name"<<endl;
    			cin>>name;
    			cout<<"Enter "<<name<<"'s phone number"<<endl;
    			cin>>item;
    			mp.insert(pair<string,double>(name,item));
    			break;
    	case 2:cout<<"Enter the contact name to be deleted"<<endl;
    			cin>>name;
    			it=mp.find(name);
				if(it!=mp.end())
     			mp.erase (it); 
     			else cout<<"No contacts found";
    			break;
    case 3:	cout<<"Enter string"<<endl;
			cin>>s;
			cout<<"Contacts found\n";
    		for (it = mp.begin(); it != mp.end(); it++)
   	     	  {	
			 	i=0;che=1;
				while( i<s.size()&&(che==1||che==2))
				{
				if(it->first[i]==s[i])che=2;
				else che=-1;
				i++;
				}
				if(che==2)cout<<it->first<<"\t\t"<<it->second<<endl;
			}
					break;
    	case 4:
		cout<<"Enter the name"<<endl;
		cin>>name;
		it=mp.find(name);
		if(it!=mp.end())
		{
			cout<<"1.Name\n2.Number"<<endl;cin>>i;
			if(i==1)
			{
			cout<<"Enter new name"<<endl;cin>>s;
			item=it->second;
			mp.erase(it);
			mp.insert(pair<string,double>(s,item));
			}
			if(i==2) 	
			{
			cout<<"Enter the number"<<endl; cin>>item;
			it->second=item;}
	}
	else cout<<"no match found"; 
				break;
    	case 5:discon();return ;
        break;              
     }}}




