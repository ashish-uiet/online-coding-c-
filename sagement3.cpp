#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
      int t,i;cin>>t;      
      int match[] ={6,2,5,5,4,5,6,3,7,6};
      while(t--){
          int  mcount=0;
          string str;  cin>>str;
          for (char latter: str) {
                 int digit = latter-'0';
                    mcount += match[digit];
            }
            string answer;
            while(mcount>=2){
                answer.push_back('1');
                mcount =mcount-2;
            }
            if(mcount==1) answer[0]='7';
                cout<<answer<<endl;
      }
      return 0;
}