#include <iostream>
#include<windows.h>
using namespace std;

using namespace std;
double expression();
char * express;
int calc()
{
	while(1){
			system("cls");
for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
    cout << "\t\t\t\tCALCULATOR\n\n";

  for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
	 string a,b="home";
cout<<"\nType home to main menu or any key to proceed ";
cin>>a;
if(a==b){return 0;} 
	cout<<"\nEnter expression here\n"<<endl;
	char exp[100]; cin>>exp;
	express=exp;
    double result = expression();
	cout << "\n"<<exp<<" = "<<result << endl;	system("pause");
	}
	system("pause");
    return 0;
}

char peek()
{
    return *express;
}

char get()
{
    return *express++;
}

double expression();

double number()
{
    double result = get() - '0';
    while (peek() >= '0' && peek() <= '9')
    {
        result = 10*result + get() - '0';
    }
    return result;
}

double factor()
{
    if (peek() >= '0' && peek() <= '9')
        return number();
    else if (peek() == '(')
    {
        get(); // '('
        double result = expression();
        get(); // ')'
        return result;
    }
    else if (peek() == '-')
    {
        get();
        return -expression();
    }
    return 0; // error
}

double term()
{
    double result = factor();
    while (peek() == '*' || peek() == '/')
        if (get() == '*')
            result *= factor();
        else
            result /= factor();
    return result;
}

double expression()
{
    double result = term();
    while (peek() == '+' || peek() == '-')
        if (get() == '+')
            result += term();
        else
            result -= term();
    return result;
}


