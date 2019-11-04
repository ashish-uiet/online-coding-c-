#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[9];
    int i=0,j;
    cin>>str;
    if(str[2]=='A' || str[2]=='E' || str[2]=='I' || str[2]=='O' || str[2]=='U' || str[2]=='Y'){
        cout<<"invalid";
        return 0;
    }
    while(str[i]!='\0'){
        if(i==0 || i==3 || i ==4 || i==7){
            j=i;
        int num1 = str[j];
        int digit1 = num1-48;
        int num2 =str[++j];
         int digit2 = num2-48;
        if((digit1+digit2)%2!=0){
            cout<<"invalid";
            return 0;
        }
        }
        i++;
    }
    cout<<"valid";
}