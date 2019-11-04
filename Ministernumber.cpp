#include<iostream>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;
bool checkprime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=pow(n,0.5);i++){
        if((n%i)==0){
            return false; 
        }
    }
    return true;
}
int main(){
    long int a,b;
    cin>>a>>b;
    for(long int k=a;k<=b;k++){
       bool t= checkprime(k);
       if(t){
           long int v=k,h,sum=0,p;
           while(v){
              p = v/10;
              h=v%10;
              sum=sum+h;
              v=p;
           }
            bool x= checkprime(sum);
            if(x){
                cout<<k<<" ";
            }
       }
    }
    return 0;
}
