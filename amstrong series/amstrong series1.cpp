#include<iostream>
#include<math.h>
using namespace std;
int main(){
int k,d1,d2,d3,n,sum=0;
for(n=1;n<=500;n++){
       d1=n%10;
       k=n/10;
       d2=k%10;
       d3=k/10;
        sum=pow(d1,3)+pow(d2,3)+pow(d3,3);
    if(sum==n)
        cout<<endl<<n;
}
return 0;
}
