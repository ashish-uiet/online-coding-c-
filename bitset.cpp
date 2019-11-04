#include <stdio.h>
#include <bitset>
int main() { 
    int t;
    cin>>t,n;
    while(t--){
       cint>>n;
       std::bitset<8> bits(n);
       std::cout<<bits;      
    }

    // std::bitset<8> bin_x(x);
    // std::cout << bin_x
	return 0;
}
