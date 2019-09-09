#include<iostream>
#include<time.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
    srand(time(0));
    int gen,ch,guess,n,m=10,i,j,k=12,o=8,l;
    char c,v;
    start:
        system("cls");
    cout<<"\n\t\t\t\t welcome to the number guessing game";
    cout<<"\n\t\t\t\t\t1.play now\n\t\t\t\t\t2.choose difficulty\n\t\t\t\t\t3.exit"<<endl;
    cin>>ch;
    switch(ch){
    case 1:
        medium:
            system("cls");
            cout<<"\n\t\t\t\t The computer has a secret number in the range of 1 to 100 and you have to guess it in 10 tries";
            gen=(rand()%100)+1;
            cout<<"\n guess a number"<<endl;
            for(n=1;n<=10;n++){
                cin>>guess;
                if(guess==gen){
                    cout<<"\n congratulations your guess is right"<<" the number was "<<gen;
                     break;
                }
               else
                    cout<<"\nremaining tries ="<<m-n<<endl;
            }
            cout<<"press enter to try again and press esc to return";
            xx:
            c=getche();
            i=c;
            if(i==13)
                goto medium;
            else if(i==27)
                    goto start;
            else
                        cout<<"\npress enter or esc";
                        goto xx;
                        break;
    case 2:
        zz:
        system("cls");
        cout<<"\n\t\t\t\tThere are three difficulties in the game:"<<"\n\t\t\t\t\teasy\n\t\t\t\t\tmedium\n\t\t\t\t\thard";
        cout<<"\npress 'e' for easy\n press 'm' for medium\npress 'h' for hard"<<endl;
        cin>>v;
        if(v=='e')
            goto easy;
        else if(v=='m')
        goto medium;
        else if(v=='h')
            goto hard;
        else
            cout<<"\nmake right choice";
        goto zz;
        easy:
            system("cls");
            cout<<"\n\t\t\t\t The computer has a secret number in the range of 1 to 50 and you have to guess it in 12 tries";
            gen=(rand()%50)+1;
            cout<<"\n guess a number"<<endl;
             for(j=1;j<=12;j++){
                cin>>guess;
                if(guess==gen){
                    cout<<"\n congratulations your guess is right"<<" the number was "<<gen;
                     break;
                }
                     else
                        cout<<"\nremaining tries ="<<k-j<<endl;
            }
            cout<<"press enter to try again and press esc to return";
            aa:
            c=getche();
            i=c;
            if(i==13)
                goto easy;
            else if(i==27)
                    goto start;
            else
                        cout<<"\npress enter or esc";
                        goto aa;
           hard:
                 system("cls");
            cout<<"\n\t\t\t\t The computer has a secret number in the range of 1 to 250 and you have to guess it in 8 tries";
            gen=(rand()%250)+1;
            cout<<"\n guess a number";
            for(l=1;l<=8;l++){
                cin>>guess;
                if(guess==gen){
                    cout<<"\n congratulations your guess is right"<<" the number was "<<gen;
                     break;
                }
                     else
                        cout<<"\nremaining tries ="<<o-l<<endl;
            }
            cout<<"press enter to try again and press esc to return";
            kk:
            c=getche();
            i=c;
            if(i==13)
                goto hard;
            else if(i==27)
                    goto start;
            else
                        cout<<"\npress enter or esc";
                        goto kk;
                        break;
    case 3:
        exit(1);
    default:
        ff:
        cout<<"\nmake a valid choice!";
        cout<<"\n press ecs to return";
         c=getche();
            i=c;
            if(i==27)
                goto start;
                else
                    goto ff;
        return 0;
    }

}
