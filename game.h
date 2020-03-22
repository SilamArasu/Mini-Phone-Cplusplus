#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <fstream>
using namespace std;

void drawLine(int n, char symbol);
void rules();
 
void prg()
{system("cls");
	ofstream outputFile;
 char in_name[80];
    FILE *in_file;
    int ch;

outputFile.open("Dice.txt",fstream::out | fstream::app);
    string playerName;
    int amount,bettingAmount,guess,dice; 
    char choice;
 
    srand(time(0)); 

    for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
    cout << "\t\t\t\tGAME\n\n";
  for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
    
    in_file = fopen("Dice.txt", "r");
	    while ((ch = fgetc(in_file)) != EOF)
        {
            printf("%c", ch);
        }
        fclose(in_file);
    
    cout << "\n\nEnter Your Name : ";
    cin>> playerName;
 
    cout << "\n\nEnter Deposit amount to play game : $";
    cin >> amount;
    
    do
    {
        system("cls");
        rules();
        cout << "\n\nYour current balance is $ " << amount << "\n";
		
		// Get player's betting amount
        do
        {
            cout <<playerName<<", enter money to bet : $";
            cin >> bettingAmount;
            if(bettingAmount > amount)
                cout << "Your betting amount is more than your current balance\n"
                       <<"\nRe-enter data\n ";
        }while(bettingAmount > amount);
 
		
        do
        {
            cout << "Guess your number to bet between 1 to 6 :";
            cin >> guess;
            if(guess <= 0 || guess > 6)
                cout << "Please check the number!! should be between 1 to 6\n"
                    <<"\nRe-enter data\n ";
        }while(guess <= 0 || guess > 6);
 
        dice = rand()%6 + 1; 
    
        if(dice == guess)
        {
            cout << "\n\nGood Luck!! You won Rs." << bettingAmount * 10;
            amount = amount + bettingAmount * 10;
        }
        else
        {
            cout << "Bad Luck this time !! You lost $ "<< bettingAmount <<"\n";
            amount = amount - bettingAmount;
        }
 
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have $ " << amount << "\n";
        if(amount == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n\n-->Do you want to play again (y/n)? ";		
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    if(choice=='n'||choice=='N')
   	 outputFile << playerName <<"\t"<<amount<< endl;
outputFile.close();

        
    cout << "\n\n\n";
    drawLine(70,'=');
    cout << "\n\nThanks for playing game. Your balance amount is $ " << amount << "\n\n";
    drawLine(70,'=');
 
    
}
 
void drawLine(int n, char symbol)
{
    for(int i=0; i<n; i++)
        cout << symbol;
    cout << "\n" ;
}
 
void rules()
{
    system("cls");
    cout << "\n\n";
    for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
    cout << "\n\n\t\tRULES OF GAME\n\n";
  for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
    cout << "\t1. Choose any number between 1 to 6\n";
    cout << "\t2. If you win you will get 10 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
    drawLine(80,'-');
}
int game()
{  string a,b="home";
	prg();
	cout<<"\ntype home to main menu or any key to proceed ";
cin>>a;
if(a==b){return 0;}
game();
return 0;
}
 

