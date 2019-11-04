#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};
int main(){
    Node* head=NULL;
    head=new Node();
    Node* start = head;
    cout<<"Initial linkedList size\n";
     printLinked(head);
    cout<<"\nEnter Size of element in linked list\n";
//     int n ;cin>>n;
    for ( int i = 1; i <=21; i++)
    {
        addElement(head,i);
    }
    printLinked(head);
    findMiddle(head);
    cout<<"\nEnter nth position  to find element \n";
    int t ;cin>>t;
    findElement(head,t);
    cout<<"\nEnter nth position from end  to find element \n";
    int p ;cin>>p;
    findElementfromend(head,p);
    return 0;
}
void printLinked(Node *temp){
        while (temp!=NULL)
        {
                cout<<temp->data<<",";
                temp=temp->next;
        }
}
void addElement(Node *head,int n){
                 Node *temp =NULL;
                temp=new Node();
                temp->data = n;
                temp->next=NULL;
                if(head->data==0){
                        head->data = temp->data;
                        head->next=NULL;
                }else
                {
                       while (head->next!=NULL)
                        {       
                                head=head->next; 
                        }
                        head->next=temp;
                }                 
}
void findMiddle(Node *temp){
        int count=0;
        Node* mid = temp;
        while (temp!=NULL)
        {
                if(count & 1){
                  mid= mid->next;
                }
                ++count;
                temp=temp->next;
        }
        if(mid!=NULL){
        cout<<"middle elements is ="<<mid->data<<endl;
        }
        cout<<"\n";
}

void findElement(Node *temp, int n){
        int count=1;
        while ( temp!=NULL)
        {
                if(count==n){
                        cout<<n<<"th element is "<<temp->data<<endl;   
                        return;  
                }
        temp=temp->next;
        count++;
        }
        if(temp==NULL)
        {
           cout<<"LIMIT DOES NOT EXIETS\n";
        }
          
}
void findElementfromend(Node *head, int n){
        int count =0;
        Node* start=head;
        while (head!=NULL)
        {
                head=head->next;
                count++;
        }
        findElement(start,count-n);
        
}

