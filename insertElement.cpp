#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
    int arr[100],k,val,temp;
    for(int i=0;i<15;i++){
        arr[i]=i;
    }
    for(int i=0;i<10;i++){
          cout<<arr[i]<<endl;
    }
    cout<<"Enter index"<<endl;
    cin>>k;
    if(k>=10){
        cout<<"\n\n\n Enter valid index"<<endl;
        return 0;
    }
    cout<<"Enter value"<<endl;
    cin>>val;
    for(int i=k;i<10;i++){
        temp=arr[i];
        arr[i]=val;   // temp=3 , val='';
        val = temp;
    }
     for(int i=0;i<15;i++){
          cout<<arr[i]<<endl;
    }
}
