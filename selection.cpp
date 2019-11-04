#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
            cin>>arr[i];
    }
    for(int j=0;j<n-1;j++){
            int min =arr[j];
            int index=j;
            for(int k=j+1;k<n;k++){
                if(arr[k]<min){
                    min=arr[k];
                    index=k;
                }
            }
                int temp;
                temp=arr[j];
                arr[j]=min;
                arr[index]=temp;
    }
     for(int i=0;i<n;i++){
            cout<<arr[i]<<"*";
    }
    return 0;
}