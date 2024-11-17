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
node* buildBST(node* root,int d){
   if(root==NULL){
    return new node(d);
   }
   if(d<root->data){
    root->left=buildBST(root->left,d);
   }
   else{
    root->right=buildBST(root->right,d);
   }
   return root;
}
void input(node*& root){
    cout<<"enter data:"<<endl;
    int data;
    cin>>data;
    while(data!=-1){
        root=buildBST(root,data);
        cin>>data;
    }
    // return root;
}
node* minVal(node* root){
    node* temp=root;
    while(temp->left!=nullptr){
        temp=temp->left;
    }
        return temp;
}
node* deletenode(node* root,int key){
    if(root==nullptr){
        return NULL;
    }
    // delete
    if(root->data==key){
        // 0 child
            if(root->left==NULL && root->right==NULL){
                delete root;
                return nullptr;
            }
        // 1 child
            //  left child
            if(root->left!=NULL && root->right==NULL){
                node* temp=root->left;
                delete root;
                return temp;
            }
            if(root->left==NULL && root->right!=NULL){
                node* temp=root->right;
                delete root;
                return temp;
            }
        // 2 child
            if( root->left!=NULL & root->right!=NULL){
                int mini=minVal(root->right)->data;
                root->data=mini;
                root->right=deletenode(root->right,mini);
                return root;
            }

    }

    // traversal
    if(key<root->data){
       root->left= deletenode(root->left,key);
       return root;
    }
    else{
        root->right=deletenode(root->right,key);
        return root;
    }
}
void inorder(node* root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void levelOrder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
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
int main() {
    
    node* root=NULL;
    input(root);
    // inorder(root);
    // cout<<minVal(root);
    levelOrder(root);
    cout<<endl<<"LOT after deletion"<<endl;
    root=deletenode(root,5);
    levelOrder(root);
    
    return 0;
}