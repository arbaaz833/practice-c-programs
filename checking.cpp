#include<iostream>
#include<string>
#include<conio.h>
#include<windows.h>
#include<time.h>
using namespace std;
int main()
{
srand(time(0));
int n=0,y,q,s;
string str[10];
str[0]="kangaroo";str[2]="lion";str[3]="sheep";str[1]="elephant";str[4]="crocodile";str[5]="rhino";str[6]="camel";str[7]="goat";str[8]="dear";str[9]="leopard";
s=(rand()%10)+1;
str[s];
int lenght = str[s].size();
 cout<<"guess the word"<<endl;
 string wor[lenght];
 for(y=0;y<lenght;y++)
    wor[y]='_';

for(n=0;n<=(lenght*2);n++)
  {
    cout<<"remaining tries ="<<(lenght*2)-n<<endl;
    for(q=0;q<lenght;q++)
    {
      cout<<" "<<wor[q];
    }
    cout<<endl;
    char c =getch();
    //int pos=str[s].find(c);
    //int pos2=str[s].find(c,pos+1);
    int start=0,pos;
    while(pos!=lenght)
    {
        pos=str[s].find(c,start);
        wor[pos]=c;
        start=pos+1;
    }

  //if(pos!=string::npos)
   {
       //wor[pos]=c;
   }
  //if(pos2!=string::npos)
  {
      //wor[pos2]=c;
  }
  system("cls");


   }
return 0;
}
