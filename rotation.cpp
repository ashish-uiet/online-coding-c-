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
    cout<<"how many rotation you want"<<endl;
    int r;cin>>r;
    for (int  k = 1; k <=r; k++)
    {
        int temp=arr[0];
        for(int j=1;j<n;j++){
            arr[j-1]=arr[j];
        }
            arr[n-1] = temp;
    }
    cout<<"after rotation Highest value and their Index"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    int big = arr[0];
    int index;
     for(int j=1;j<n;j++){
        if(big<arr[j]){
            big=arr[j];
            index =j;
        }
    }
   cout<<"big value is:"<<big<<"index is:"<<index<<endl;
  return 0;
}