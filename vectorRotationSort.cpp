#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;    

struct Interval
{
    int start, end;
};
bool compareInterval(Interval i, Interval j) 
{ 
    cout<<"["<<i.start<<"],["<<j.start<<"]";
    cout<<"\n";
    return (i.start < j.start); 
} 
int main(){
    vector<Interval>v ={ { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } }; 
    sort(v.begin(),v.end(),compareInterval);
    for (auto x : v) {
        cout<<"["<<x.start<<","<<x.end<<"]";
    }
    return 0;
}
