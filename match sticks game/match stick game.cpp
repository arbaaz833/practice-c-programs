#include<iostream>
#include<windows.h>
using namespace std;
    int main(){
        int user,computer,rem=21,n;
        cout<<endl<<"\t\t\t\twelcome to the match stick game"<<"\n\t\t\t\trules:\n\t\t\t\t1.There are 21 match sticks in the game.\n\t\t\t\t2.First you will pick and then computer will pick.\n\t\t\t\t3.you can pick 1,2,3 or 4 match sticks in one turn.";
        for(n=1;rem>1;n++)
            {
        cout<<"\nyour turn pick match sticks";
        cin>>user;
        rem=rem-(user+(5-user));
        cout<<"computer picks up sticks"<<endl;
        cout<<"remaining sticks are"<<rem<<endl;
            }
        system("cls");
    cout<<"\n remaining sticks are"<<rem<<endl;
    cout<<"you loose";
    return 0;
    }
