#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,q;
    cin>>n>>q;
    long int mainArr[n];
    for(long int i=0;i<n;i++){
        cin>>mainArr[i];
    }
    while(q--){
        long int sum =0;
        long int a,b,c;cin>>a>>b>>c;
        if(a==1){
                mainArr[b]=c;
        }else{
            if(n>=c){
                for(long int b;b<=c;b++){
                    sum=sum+mainArr[b];
                }
                cout<<sum<<endl;
            }else
            {
                cout<<"-1"<<endl;
            }
        }
        cout<<mainArr[0];
        return 0;
    }   
    return 0;
}