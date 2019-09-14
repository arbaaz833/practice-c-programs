#include<iostream>
using namespace std;
int main(){
    int r,d,n,arr[100],z,l=0,d1,r1,h,x,arr1[100];
    cout<<"\nenter the decimal number to convert it into binary and octal";
    cin>>n;
    x=n;
    int k=0;
    do{
        d=n/2;
        r=n%2;
        n=d;
        arr[k]=r;
        k++;
        }
        while(d!=0);
        z=k-1;
        cout<<"\n\n\t\t\tthe binary number is :";
        for(z;z>=0;z--){
            cout<<arr[z];
        }
    do{
        d1=x/8;
        r1=x%8;
        x=d1;
        arr1[l]=r1;
        l++;
        }
        while(d1!=0);
        h=l-1;
         cout<<"\n\n\t\t\tThe octal number is :";
        for(h;h>=0;h--){
            cout<<arr1[h];
        }
        return 0;
}
