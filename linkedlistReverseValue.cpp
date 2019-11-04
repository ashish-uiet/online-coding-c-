#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};
void printLinked(Node *temp){
        while (temp!=NULL)
        {
                cout<<temp->data<<",";          
                temp=temp->next;            
        }
    cout<<"\n";
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

int doReverse(int n){
    int reverse = 0;
        while (n!=0)
        {
           int rem = n%10;
            reverse = reverse*10+rem;
            n=n/10;
        }
    return reverse;
}

void reversed (Node *head){
        while (head!=NULL)
        {
            head->data=doReverse(head->data);
            head=head->next;
        }
}
void deleteNode(Node *head, int n ){
        Node *ptr=NULL;
        cout<<head->data<<"@\n";
        if(head!=NULL && head->data==n)
        {
                ptr=head;
                head=head->next;
                free(ptr);
                return;
        }
        while (head!=NULL && head->data!=n)
        {   
            ptr=head;
            head=head->next;
        }
          if(head==NULL){
          cout<<"Element not found for delete\n";
          return;
        }
        ptr->next=head->next;
        free(head);
}
void reverseLinkedList(Node *head){
    }

int main(){
    Node* head=NULL;
    head=new Node();
    Node* start = head;
    cout<<"Initial linkedList size\n";
     printLinked(head);
    for ( int i = 423; i <=433; i++)
    {
        addElement(head,i);
    }
    printLinked(head);
    cout<<"linkedList value after reversed\n";
    reversed(head);
    printLinked(head);
    char choice;
    bool run= true;
    while (run)
    {
        cout<<"Would you like to perform Deletion "<<endl;
        cin>>choice;
        if(choice=='N' || choice=='n'){
            run=false;
            continue;
        }
        cout<<"Enter element to delete node from list \n";
        int k;cin>>k;
        deleteNode(head,k);
        printLinked(head);
    }
    cout<<"reverse of linkedList is = \n";
    reverseLinkedList(head);

    return 0;
}