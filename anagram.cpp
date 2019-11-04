#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string anagram(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    if (n1 == n2)
    {
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        for(int i=0;str1[i] && str2[i] ;i++){
            if(str1[i]!=str2[i]){
                return "NO";
            }
        }
        return "YES";
    }
    else
    {
        return "NO";
    }
}
int main()
{
    int n;
    cin >> n;
    char str1[10000], str2[10000];
    while (n--)
    {
        cin >> str1 >> str2;
        cout << anagram(str1, str2)<<endl;
    }
}
