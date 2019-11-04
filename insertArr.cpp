#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    long int q;
    cin>>n>>q;
    long int arr[n];
    for(long int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(long int k=1;k<=q;k++){
        long int a,b,c;
        cin>>a>>b>>c;   
        if(a==1){
            arr[b]=c;
        }
        else
        {   
            if(b<=c && c<=n){ 
                long int sum =0;
                for (long int m=b;m<=c;m++) 
                {  
                    sum = sum+arr[m];

                }
                cout<<sum<<endl; 
            }else
            {
                cout<<"-1"<<endl;
            }
        }    
    }
     return 0;
}