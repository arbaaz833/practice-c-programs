#include <iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
int a;
float num1,num2,num3,num4,num5,num6,num7,num8,base,power;
char c;
 sos:
    system("cls");
cout<< "\n\n\t\t\t\t"<<"WELCOME TO THE CALCULATOR PROGRAM"<<endl;
cout<<"\t\t\t\t\t1.ADDITION\n\t\t\t\t\t2.SUBSTRACTION\n\t\t\t\t\t3.PRODUCT\n\t\t\t\t\t4.QUOTIENT\n\t\t\t\t\t5.RAISE TO THE POWER\n\t\t\t\t\t6.LOG WITH BASE N\n\t\t\t\t\t7.FACTORIAL\n\t\t\t\t\t8.EXIT";
cout<<"\nENTER YOUR CHOICE=";
cin>>a;
switch(a){
case 1:{
    jump1:
    system("cls");
    cout<<"\n\t\t\t\tADDITION OF TWO NUMBERS";
    cout<<"\nenter any two numbers to add";
    cin>>num1;
    cin>>num2;
    cout<<num1<<"+"<<num2<<"="<<num1+num2;
    cout<<endl<<"\npress enter to calculate again and press ESC to return to main menu";
    c=getche();
    int i=c;
    if(i==13) {
        goto jump1;
    }else if(i==27){
    goto sos;
    }
    else
        cout<<"\nplease press enter or esc";
}
        break;
case 2:{
    jump2:
         system("cls");
    cout<<"\n\t\t\t\tSUBTRACTION OF TWO NUMBERS";
    cout<<"\nenter any two numbers to substract";
    cin>>num3;
    cin>>num4;
    cout<<num3<<"-"<<num4<<"="<<num3-num4;
    cout<<endl<<"\npress enter to calculate again and press ESC to return to main menu";
    c=getche();
      int i=c;
    if(i==13) {
        goto jump2;
    }else if(i==27){
    goto sos;
    }
    else
        cout<<"\nplease press enter or esc";
}
        break;
case 3:{
    jump3:
         system("cls");
    cout<<"\n\t\t\t\tproduct OF TWO NUMBERS";
    cout<<"\nenter any two numbers ";
    cin>>num5;
    cin>>num6;
    cout<<num5<<"*"<<num6<<"="<<num5*num6;
    cout<<endl<<"\npress enter to calculate again and press ESC to return to main menu";
    c=getche();
    int i=c;
    if(i==13) {
        goto jump3;
    }else if(i==27){
    goto sos;
    }
    else
        cout<<"\nplease press enter or esc";
}
        break;
case 4:{
    jump4:
         system("cls");
    cout<<"\n\t\t\t\tDIVISION OF TWO NUMBERS";
    cout<<"\nenter any two numbers to DIVIDE";
    cin>>num7;
    cin>>num8;
    if(num8==0){
        cout<<"\ncannot divide by 0,enter non zero number";
        goto jump4;
    }else
    cout<<num7<<"/"<<num8<<"="<<num7/num8;
    cout<<endl<<"\npress enter to calculate again and press ESC to return to main menu";
    c=getche();
    int i=c;
    if(i==13) {
        goto jump4;
    }else if(i==27){
    goto sos;
    }
    else
        cout<<"\nplease press enter or esc";
}
        break;
case 5:{
    jump5:
        system("cls");
        cout<<"\n raised to the power";
        cout<<"\n enter the base number";
        cin>>base;
        cout<<"\n enter the power number";
        cin>>power;
        if(power==0){
            cout<<base<<"^"<<power<<"="<<"1";
        }else if(power>0){
             long double result=1;
            for(int n=1;n<=power;n++)
            {
               result = result*base;
            }
             cout<<endl<<base<<"^"<<power<<"="<<result;
        }else if(power<0){
        power= abs(power);
        long double result =1;
        for(int z=1;z<=power;z++)
            {
               result = result*base;
            }
            float x= 1/result;
             cout<<endl<<base<<"^"<<power<<"="<<x;
        }
            cout<<endl<<"\npress enter to calculate again and press ESC to return to main menu";
           c=getche();
            int i=c;
        if(i==13) {
            goto jump5;
         }else if(i==27){
          goto sos;
    }
    else
        cout<<"\nplease press enter or esc";
}
            break;
case 6:{
    jump6:
        system("cls");
        float b,x,r;
        cout<<"\nlog with base n";
        cout<<"\nenter the base of the log";
        cin>>b;
        if(b<=0)
            cout<<"\nerror"<<"\nenter positive base";
        cout<<"\nenter the argument";
        cin>>x;
        r=log(x)/log(b);
        cout<<"\n log is equal to"<<r;
        cout<<endl<<"\npress enter to calculate again and press ESC to return to main menu";
    c=getche();
    int i=c;
    if(i==13) {
        goto jump6;
    }else if(i==27){
    goto sos;
    }
    else
        cout<<"\nplease press enter or esc";
}
        break;
case 7:{
    jump7:
        system("cls");
        long double f,factorial=1;
        system("cls");
        cout<<"\n factorial of a number";
        cout<<"\nenter  any positive number to calculate factorial";
        cin>>f;
        if(f<0)
            goto jump7;
        else
        for(int w=1;w<=f;++w){
            factorial*=w;
        }
        cout<<"\nfactorial of"<<f<<"="<<factorial;
        cout<<endl<<"\npress enter to calculate again and press ESC to return to main menu";
    c=getche();
    int i=c;
    if(i==13) {
        goto jump7;
    }else if(i==27){
    goto sos;
    }
    else
        cout<<"\nplease press enter or esc";
}
        break;
case 8:
    exit(1);
    break;
default:{
    system("cls");
    cout<<"\nplease make a valid choice!";
    cout<<endl<<"\npress ESC to return to main menu";
    zz:
    c=getche();
    int i=c;
    if(i==27){
    goto sos;
    }
    else
        cout<<"\nplease press enter or esc";
        goto zz;
}
        break;

}
return 0;
}
