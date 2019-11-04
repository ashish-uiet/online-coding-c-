#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,p=0,m=0,rem;
    cin>>n;
    if(n==1){
        cout<<"Patlu";
        return 0;
    }else if(n==2 || n==3){
        cout<<"Motu";
        return 0;
    }
    for(int i=1;sum<=n;i++){
            p=i;
            m=2*i;
            sum=sum+(p+m);            
            rem = n-sum;
            if(rem<=((i+1)+2*i)){
                    if(rem<=(i+1)){                        
                        cout<<"Patlu";
                        break;
                    }else{
                        cout<<"Motu";
                        break;
                    }
            }
    }
}
