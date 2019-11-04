#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
};
int main(){
        int v =1;
        cout<<"value of v is = "<<v<<endl;
        cout<<"address of v is ="<<&v<<endl;
        int *ptr=&v;
        cout<<"using pointer value of v is = "<<*ptr<<endl;
        cout<<"Using pointer address of v is ="<<ptr<<endl;
    return 0 ;
}
