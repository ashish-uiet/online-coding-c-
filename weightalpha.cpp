#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    int i=0,sum=0;
    cin>>str;
    while(str[i]!='\0'){
        int latter =str[i];
        int wgt = latter-96;
        sum=sum+wgt;
        i++;
    }
    cout<<sum;
    return 0;
}
