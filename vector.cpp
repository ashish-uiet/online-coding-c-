#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> g1;
    for (int i = 1; i <= 7; i++) 
    {   
        g1.push_back(i); 
    }
    cout << "Output of begin and end: "; 
    for (auto i = g1.begin(); i != g1.end(); ++i) 
    {
        cout << *i << " "; 
    }
    cout<<"\nno of elements in vector "<<g1.size()<<endl;
    cout<<"maximum number of elements that the vector can hold."<<g1.max_size()<<endl;
    cout<<"Returns the size of the storage space currently allocated to the vector expressed as number of elements."<<g1.capacity()<<endl;
    // g1.resize(10);
    cout<<"prints the vector size after resize()"<<endl; 
    cout << "\nSize : " << g1.size();
    if (g1.empty() == false) 
        cout << "\nVector is not empty\n"; 
    else
        cout << "\nVector is empty\n";  
    // Shrinks the vector 
    // g1.shrink_to_fit(); 
    cout<<"now vector elements are "<<endl;
    for (auto i = g1.begin(); i != g1.end(); ++i) 
    {
        cout << *i << " "; 
    }
    cout<<"\n###########################\n";
    cout << "\nReference operator [g] : g1[4] = " << g1[4]; 
    cout << "\nat : g1.at(4) = " << g1.at(4); 
    cout << "\nfront() : g1.front() = " << g1.front(); 
    g1.push_back(18);
    cout<<"\npush back 18 \n";
    cout << "\nback() : g1.back() = " << g1.back(); 
    // pointer to the first element 
    int* pos = g1.data();
    cout << "\nThe first element is " << *pos<<endl; 
    cout<<"\n before pop elements are \n";
     for (auto i = g1.begin(); i != g1.end(); ++i) 
    {
        cout << *i << " "; 
    }
    // assigns new value to the vector elements by replacing old ones
     g1.pop_back();
     cout<<"\nafter pop elements \n";
     for (auto i = g1.begin(); i != g1.end(); ++i) 
     {
        cout << *i << " "; 
     }
        cout << "\nThe first element is 420 inserted:";
    g1.insert(g1.begin(),420);
    cout << "\nThe first element is: " << g1[0]; 
    cout<<"\nclear  is used to remove all the elements of the vector container";
    cout<<"\n emplace back 333 ";
    g1.emplace_back(333);
    for(auto i = g1.begin(); i != g1.end(); ++i) 
    {
        cout << *i << " "; 
    }
    cout<<"\n";
}