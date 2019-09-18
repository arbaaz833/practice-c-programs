#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int *pointer,*temp,k,w,a,z,n;
    char c;
    pointer = new int[10];
    cout<<"enter the numbers"<<endl;
    for(n=0;n<10;n++){
        cin>>pointer[n];
        if(n==9){
                cout<<"\nwant to enter more numbers?";
                cout<<"\npress y to *yes* or n to *no*";
                c=getche();
                if(c=='y')
                    goto aa;
                else if(c=='n')
                    goto bb;
             aa:
                 {
                temp=new int [20];
        for(z=0;z<10;z++){
            temp[z]=pointer[z];
        }
        delete[] pointer;
        for(a=10;a<20;a++){
            cin>>temp[a];
        }
        cout<<"the number you have entered are =";
        for(w=0;w<20;w++){
        cout<<','<<temp[w];
        }
        goto sos;
             }
        }
        }
        bb:
            for(k=0;k<10;k++){
            cout<<"\nthe number you have entered are ="<<" "<<pointer[k];
        }
            sos:
                return 0;
    }



