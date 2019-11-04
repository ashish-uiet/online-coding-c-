#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a=0,b=0;
bool checkprime(int z){
     for (int i=2; i<z/2; i++) 
        if (z%i == 0) 
            return false; 
    return true; 
}
int getPrime(int k){
    if(checkprime(k)){
        return k;
    }else
    {
        b++;
        getPrime(++k);
    }
}
int main(){
    int n ; cin>>n;
    while(n--){
        int t,i=0;
        cin>>t;
        char str[t];
        cin>>str;
        string ans;
        while(str[i]!='\0'){
              int x = str[i];
              int d =  getPrime(x);
              char p= d;
              ans.push_back(p);
              i++;
        }
        cout<<ans;
    }
}