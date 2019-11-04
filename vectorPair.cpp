#include<bits/stdc++.h> 
using namespace std; 

bool compare(const pair<int,int> &a,const pair<int,int> &b){
            return (a.second<b.second);
}

int main() 
{ 
	vector< pair<int,int> > vect; 
	int arr[] = {10, 20, 5, 40 }; 
	int arr1[] = {30, 60, 20, 50}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	for (int i=0; i<n; i++) 
		vect.push_back(make_pair(arr[i],arr1[i]));  
	for (int i=0; i<n; i++) 
		cout <<"[" <<vect[i].first << ","
			<< vect[i].second <<"]"<<","; 
    sort(vect.begin(),vect.end(),compare);
    cout<<"\nsorted vector\n";
      for (auto x : vect) {
        cout<<"["<<x.first<<","<<x.second<<"]";
    }
	return 0; 
} 
