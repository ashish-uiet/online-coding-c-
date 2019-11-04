#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int tem=1,num ,i=0,rem,div;
    cin>>num;
     char str[50];
    while(num!=0){
	tem = num%26;
	if(tem==0){
	char latter = 90;
       	num=(num/26)-1;
	str[i++]=latter;
	
	}else{
          tem = tem-1;
	  char latter = tem+65;
       	  num = num/26;
	  str[i++]=latter;
	}
     }
     str[i]='\0';
 // reverse the string
     reverse(str,str+strlen(str));
    cout<<str;
	return 0;
}
