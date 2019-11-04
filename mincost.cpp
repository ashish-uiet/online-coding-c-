#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
        int n ,k; cin>>n>>k;
        long int arr[n] , ans[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int j_last = 0;
        for(int i=0;i<n;i++){
                if(arr[i]>0){
                    for(int j = j_last ;j < std::min(i + k + 1, n);j++){
                            if(arr[j]<0){
                                

                            }
                    }
                }
        }
}