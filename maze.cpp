#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
     char dir[200];
     cin>>dir;
     int x=0,y=0,i=0;
     while(dir[i]!='\0'){
        switch(dir[i]){
            case 'L':
               x=x-1; 
               break;
            case 'R':
                x=x+1;
                break;
            case 'U':
                y=y+1;
                break;
            case 'D':
                y=y-1;
        }
        i++;
     }
     cout<<x<<' '<<y;
}
