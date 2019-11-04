#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;
int main(){
        vector<int> w={1,2,3};
        cout<<" 1st Vector Rotation :-\n";
        int temp =w[0];
        for(int i=1;i<w.size();i++){
            w[i-1]=w[i];
        }
        w[w.size()-1]=temp;
        for(int i=0;i<w.size();i++){
            cout<<w[i]<<"*";
        }
        cout<<" reverse using vector concept\n";
        reverse(w.begin(),w.end());
        for(int i=0;i<w.size();i++){
            cout<<w[i]<<"*";
        }
return 0;
}
