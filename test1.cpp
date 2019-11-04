#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
        int min,n=0,m=0,k=0;
        int arr[10];
        for(int i=0;i<10;i++){
            arr[i] = i+5;
        }
        for(int j=0;j<8;j++){
               if(arr[j]>n){
                   n=arr[j];
               }
               if(arr[j+1]>m){
                   m=arr[j+1];
               }
               if(arr[j+2]>k){
                   k=arr[j+2];
               }
        }
        int a= n<m?n:m; 
        int b=a<k?a:k;

        cout<<"3st largest Number is "<<b<<endl;
       
        return 0;
}