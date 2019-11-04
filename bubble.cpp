#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        for ( int k =1; k<n-j; k++)
        {
            int temp;
            if(arr[k-1]>=arr[k]){
                temp = arr[k-1];
                arr[k-1]=arr[k];
                arr[k]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
