#include <iostream>
using namespace std;
struct node 
{ 
	int data; 
	struct node *left; 
	struct node *right; 
};

 struct node *newNode(int data) 
 { 
    struct node *node = (struct node*)malloc(sizeof(struct node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL;
    // cout<<"jain";
    return node; 
 }

int main() 
{ 
struct node *root = newNode(1); 
// cout<<typeof(root);
root->left	 = newNode(2); 
root->right	 = newNode(3); 
root->left->left = newNode(4); 
cout<<root->data;
return 0;
}