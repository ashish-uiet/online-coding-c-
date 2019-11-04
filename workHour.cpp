#include<iostream>
using namespace std;
int main(){
        int n,sh,sm,eh,em,remMinute;
        cin>>n;
        while(n--){
            cin>>sh>>sm>>eh>>em;
            remMinute = (eh*60+em)-(sh*60+sm);
            cout<<(remMinute)/60<<' '<<(remMinute)%60;
        }
        return 0;
}
