#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       if(arr[i]==1){
            temp =arr[i];
            for(int j=n-1;j>i;--j){
                if(arr[j]==0){
                    arr[i]=arr[j];
                    arr[j]=temp;
                    break;
                }
            }
       }
    }
   
    cout<<"Arrange array is \n";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
