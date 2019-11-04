#include<iostream>
using namespace std;
int main(){
       int t=0;
       long int d,n,h;
       cin>>n;
       while(n--){
            cin>>d>>h;
            if((6.28*d)<=100*h){
                t++;
            }
       }
       cout<<t;
        return 0;
}