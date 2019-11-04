#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[10];
    int n,i=0,len,sum=0;
    cin>>str;
    len = strlen(str);
    if(len!=10){
        cout<<"Illegal ISBN";
        return 0;
    }
    while(str[i]!='\0'){
        int ascii = str[i];
        int digit =ascii-48; 
        sum=sum+(i+1)*digit;
        i++;
    }
    if((sum%11)==0){
        cout<<"Legal ISBN";
    }else{
        cout<<"Illegal ISBN";
    }
        return 0;
}
