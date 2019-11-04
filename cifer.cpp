#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int k;
int convert(int n, int a)
{
	int sum ,p;
	if (a == 1)
	{   
		if ((n + k) > 90)
		{
			p= k%26;
			if((n+p)>90){
               int temp= (n + p) - 90;
			   	sum= 64+temp;
			}else{
				sum = n+p;
			}			
		}
		else
		{
			sum = n + k;
		}
	}
	else if (a == 2)
	{
		if ((n + k) > 122)
		{
			p= k%26;
			if((n+p)>122){
               int temp= (n + p) - 122;
			   	sum= 96+temp;
			}else{
				sum = n+p;
			}	
		}
		else
		{
			sum = n + k;
		}
	}
	return sum;
}

int digit(int n)
{
	int sum, temp,p;
	if((n+k)>57){
		p=k%10;
		if((n+p)>57){
			temp = (n+p)-57;
			sum=47+temp;
		}else{
			sum = n+p;	
		}
	}else{
		sum=n+k;
	}
	return sum;
}
int main()
{
	char str[100];
	int i = 0;
	cin >> str;
	cin >> k;
	while (str[i] != '\0')
	{
		int val = int(str[i]);
		int result;
		if (val >= 65 && val <= 90)
		{
			result = convert(val, 1);
		}
		else if (val >= 97 && val <= 122)
		{
			result = convert(val, 2);
		}
		else if (val >= 48 && val <= 57)
		{
			result = digit(val);
		}
		else
		{
			result = val;
		}
		char fres = result;
		cout<<fres;
		i++;
	}
	return 0;
}

