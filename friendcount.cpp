#include<iostream>
using namespace std;
int main(){
   long int n,x,d;
    cin>>n>>x;
    while(n--){
           cin>>d;
           if(d<x){
               cout<<"NO"<<endl;
           }else{
               cout<<"YES"<<endl;
           } 
    }
    return 0;
}
