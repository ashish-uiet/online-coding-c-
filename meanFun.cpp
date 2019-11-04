#include<iostream>
using namespace std;
int main(){
    long int n,q ,l,r,k;
    int val,i;
    cin>>n>>q;
    long int arr[n] ,sum=0,mean;
    for(i=0;i<n;i++){
        cin>>val;
        arr[i]=val;
    }
    while(q--){
        cin>>l>>r;
        l=l-1;
        r=r-1;
        k=r-l+1;
        for(;l<=r;l++){
        sum=sum+arr[l];
        }        
         mean=sum/k;
        cout<<mean<<endl;
        sum=0;
    }
    return 0;
}