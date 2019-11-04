#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10],temp;
    for(int i = 0; i < 10; i++)
    {
        arr[i]=i;
    }
    for(int i = 0; i < 10; i++)
    {
        cout<<arr[i];
    }
    cout<<"after reverse \n";
    for(int i = 0; i < 5; i++)
    {
           temp=arr[i];
           arr[i]=arr[9-i];
           arr[9-i]=temp;
    }
    for(int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
