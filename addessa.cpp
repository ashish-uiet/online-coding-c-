#include<iostream>
#include<stdlib.h>
#include<time.h> 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,i=0 ; cin>>n;
        int r=n;
        long int arr[n],sum=0;
        while(n--){ 
            cin>>arr[i];
            i++;
        }
        int v = rand() % r;
        int rem = arr[v];   
        for(int j=0;j<r;j++){
            if(arr[j]!=rem){
                sum=sum+arr[0];
            }
        }
            cout<<sum<<endl;
    }
    return 0;
}