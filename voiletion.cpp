#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
        int t;
        long int n;
        cin>>t;
        while (t--)
        {   
            cin>>n;
            long long int uni[n];
            long int arr[n];
            for(long int i=0;i<n;i++){
                cin>>uni[i];
            }
            for(long int i=0;i<n;i++){
                cin>>arr[i];    
            }
            long int big=arr[0];
            long int sum=0;
            for (long int  j = 1; j <=n; j++)
            {
                if(uni[j-1]==uni[j])
                {
                    if(big<arr[j]){
                         big=arr[j];   
                    }
                }else
                {
                    sum=sum+big;
                    big=arr[j];
                }
            }
            cout<<sum<<endl;
        }
        return 0;
}