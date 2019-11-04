#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long long unique[n];
        long int arr[n];
        long int sum = 0;
        for (long int i = 0; i < n; i++)
        {
            cin >> unique[i];
        }
        for (long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long int big = arr[0];
        for (long int k = 0; k < n; k++)
        {
            if (unique[k + 1] == unique[k])
            {
                if(big < arr[k+1])
                {
                   big = arr[k+1];
                }
            }else
            {
            sum = sum + big;
            big = arr[k+1];
            }
        }
        sum=sum+big;
        cout << sum << endl;
    }
    return 0;
}