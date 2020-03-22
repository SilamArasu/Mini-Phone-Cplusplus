#include <stdio.h>
#include <time.h>
#include<iostream>
#include<windows.h>

using namespace std;
int time ()
{
  time_t rawtime=time(0);
  struct tm * ptm;
  ptm = gmtime ( &rawtime );
  system("cls");
  for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
    cout << "\t\t\t\tTIME\n\n";
  for(int i=0; i<80; i++)
        cout <<"-";
    cout << "\n" ;
  
  printf ("India           :  %2d:%02d\t", (ptm->tm_hour+5)%24, (ptm->tm_min+30)%60);
  printf ("England         :  %2d:%02d\n", (ptm->tm_hour)%24, ptm->tm_min);
  printf ("Belgium         :  %2d:%02d\t", (ptm->tm_hour +1)%24, ptm->tm_min);
  printf ("Melbourne       :  %2d:%02d\n", (ptm->tm_hour +11)%24, ptm->tm_min);


  printf ("Brazil          :  %2d:%02d\t", (ptm->tm_hour -3)%24, ptm->tm_min);

  printf ("Japan           :  %2d:%02d\n", (ptm->tm_hour +9)%24, ptm->tm_min);
  printf ("Canada          :  %2d:%02d\t", (ptm->tm_hour -5)%24, ptm->tm_min);
  printf ("China           :  %2d:%02d\n\n", (ptm->tm_hour +8)%24, ptm->tm_min);
  system("PAUSE");
  return 0;
}
