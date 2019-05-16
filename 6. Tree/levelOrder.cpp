#include <iostream>
#include <queue>
using namespace std;

typedef struct Node 
{ 
    int data; 
    struct Node* left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 

void preOrder(Node *root){
    if(root){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void levelOrder(Node *root){
    queue<Node*> q;
    Node* temp = NULL;

    if(!root)
        return;
    
    q.push(root);

    while(!q.empty()){
        temp = q.front();
        q.pop();

        cout<<temp->data<<" ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}

int main() {

    Node *root = new Node(1); 
    root->left             = new Node(2); 
    root->right         = new Node(3); 
    root->left->left     = new Node(4); 
    root->left->right = new Node(5);  
  
    levelOrder(root);
	
    return 0;
}