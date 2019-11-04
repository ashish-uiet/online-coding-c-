#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=(n*3+2);i++)
    {
        for(int j=1;j<=5;j++){
                if(j==1 || j==5 || (i%3==0)){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
        }
            cout<<endl;       
    }
}
