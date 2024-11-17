#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};
node* buildTree(node* root){
    cout<<"Enter data for node:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter data for left node of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter data for right node of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
};
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }}
    }
}
void inOrder(node* root){
    // base case
    if(root==nullptr){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}

void preorder(node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main() {
    node* root=NULL;
    root=buildTree(root);
    cout<<"level order traversal:"<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    cout<<"inorder traversal:"<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"preorder traversal:"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"postorder traversal:"<<endl;
    postorder(root);
    return 0;
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1  
// 1 2 5 -1 -1 6 -1 -1 4 7 -1 -1 3 -1 -1