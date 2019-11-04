#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long countVowel(string str){
        long long sum =0;
        for(char x :str){
               if(x=='a' || x=='e'||x=='i'||x=='o'||x=='u'||
                  x=='A' || x=='E'|| x=='I' || x=='O' ||  x=='U' ){
                  sum++;
               } 
        }
        return sum;
}
int main(){
    int n; cin>>n;
    while(n--){
        long long finsum =0;
        char str[100000]; cin>>str;
        for(long long i=0;str[i]!='\0';i++){
            string ans;
                for(long long j=i;str[j]!='\0';j++){
                    char c = str[j];
                    ans.push_back(c);
                   finsum = finsum + countVowel(ans);   
                }
        }
        cout<<finsum<<endl;        
    }
    return 0;
}