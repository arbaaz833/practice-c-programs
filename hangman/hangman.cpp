#include<iostream>
#include<string>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<fstream>
using namespace std;
int main()
{
srand(time(0));
int n=0,y,q,s,b=0;
string str[307];
ifstream file,file1;
file.open("animals.txt");
for(q=0;q<134;q++)
  {
    getline(file,str[q]);
  }
file.close();
file1.open("countries.txt");
for(int x=134;x<307;x++)
  {
     getline(file1,str[x]);
  }
file1.close();
s=(rand()%307)+1;
str[s];
int lenght = str[s].size();
 cout<<"\tguess the word "<<"it has "<<lenght<<" characters"<<endl;
        if(s<134)
        {
            cout<<"its name of an animal";
        }
        if(s>=134)
        {
            cout<<"its name of a country";
        }
 string wor[lenght],word="";
 for(y=0;y<lenght;y++)
    {
    wor[y]='_';
    word=word+wor[y];
    }
for(n=0;n<=(lenght+5);n++)
  {
      cout<<endl<<"remaining tries ="<<(lenght+5)-n<<endl;
      cout<<word;
      if(b==0)
      {
      cout<<"\t\t\t\t press esc for the hint "<<endl;
      }
      if(word==str[s])
      {
        cout<<endl<<"congratulations! you have guessed the word";
        break;
      }
        char c =getch();
        int a=c;
      if(a==27&&b==0)
     {
        word[0]=str[s][0];
        word[lenght-1]=str[s][lenght-1];
        b=1;
        getch();
     }
        int space=str[s].find(" ");
        int pos=str[s].find(c);
        int pos2=str[s].find(c,pos+1);
        int pos3=str[s].find(c,pos2+1);
        int pos4=str[s].find(c,pos3+1);

          if(space!=string::npos)
          {
             word[space]=' ';
          }

          if(pos!=string::npos)
          {
             word[pos]=c;
          }
          if(pos2!=string::npos)
          {
             word[pos2]=c;
          }
          if(pos3!=string::npos)
          {
             word[pos3]=c;
          }
          if(pos4!=string::npos)
          {
             word[pos4]=c;
          }
          system("cls");

    }
    cout<<endl<<"the word was "<<str[s];


return 0;

   }


