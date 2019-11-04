#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n ; cin>>n;
    int a[n];
    long s[n];
    long maxSum =0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s[i] = ((i==0) ? 0 : i = a[i-1]+a[i]);        
    }
    for(int i=0;i<n;i++){
        int index =i;
        int shift =2;
        
    }



}