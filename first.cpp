#include<iostream> 
using namespace std;
int calsum(int a,int b,int c){
        return (a+b+c);
}
int main(){
	int a,b,c,n,tol;
	cin>>n;
	while(n--){
	   cin>>a>>b>>c;
	   tol = calsum(a,b,c);
	   cout<<tol;
	}
	return 0;
}