#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
vector<int> match = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
 
int main() {
    // ios::sync_with_stdio(0);
    // srand(time(NULL));
    
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int m = 0;
        for (char c: s) {
            int k = c - '0';
            m += match[k];
        }
        string ans;
        while (m >= 2) {
            ans.push_back('1');
            m -= 2;
        }
        if (m) ans[0] = '7';
        cout << ans << endl;
    }
    
}
