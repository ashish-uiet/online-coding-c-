#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int t,rem,p,k=0,x=0,num,m,check;
    cin>>t;
    long long int tot=1, sum=0 ,mcount,n,div,l=0;
    while(t--){
        sum=0;
        mcount=0;
        m=0;
        num=1;
        cin>>n;
        if(n==0){
            mcount=6;
        }
        while(n!=0){
            rem=n%10;
            div=n/10;
            if(rem==2 || rem==3 || rem==5){   
                rem=22;
            }
            if(rem==0 || rem==6 || rem==9){   
                rem=44;
            }
            switch(rem)
            {
                case 1:
                mcount=mcount+2;
                break;                 
                case 4:
                mcount=mcount+4;
                break;
                case 8:
                mcount=mcount+7;
                break;
                case 7:
                mcount=mcount+3;
                break;
                case 22:
                mcount=mcount+5;
                break;
                case 44:
                mcount=mcount+6;
            }
            n=div;
        }
        
    check=mcount%2;
    mcount=mcount/2;
    while(mcount--){
        if((l==mcount) && (check==1)){
            num=7;
        }
        sum= sum+num*pow(10,m); 
        m++;
    }
    cout<<sum<<endl;
    }
    return 0;
}
