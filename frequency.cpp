#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findfrequency(long int arr[],int q){
    while (q>0)
    {   
    long int l,r;
    cin>>l>>r;
    l=l-1;
    r=r-1;
    long int finalcount=0;
    long int finalNumber=0;
        for(long int i=l;i<=r;i++){
            long int w=i,count=1,number;
           while (w<=r)
           {
               ++w;
               if(arr[i]==arr[w]){
                   count++;
               }
           }
           if(finalcount<=count){
               finalcount=count;
                number=arr[i];
               if(finalNumber<=number){
                   finalNumber=number;
               }
           }
        }
        cout<<finalNumber<<":"<<finalcount<<endl;
        --q;
    }
    
}
int main(){
        long int n,q;
        cout<<"enter no of digits "<<endl;
        cin>>n;
        long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Enter no of cases"<<endl;
        cin>>q;
        findfrequency(arr,q);
    return 0;
}