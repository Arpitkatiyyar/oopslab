#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    
    int data;
    node* next;
    node* back;
    node(int data1,node* next1,node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
node* convertarr2dll(vector<int> &arr){
    node* head=new node(arr[0]);
    node* prev=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node* deletehead(node* head){
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    node* prev=head;
    head=head->next;
    prev->next=nullptr;
    head->back=nullptr;
    delete(prev);
    return head;
}
node* deletetail(node* head){
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    node* tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    node* newtail=tail->back;
    newtail->next=nullptr;
    tail->back=nullptr;
    delete(tail);
    return head;
}
node* deleteK(node* head,int k){
    if(head==NULL){
        return NULL;
    }
    int cnt=0;
    node* knode=head;
    while(knode!=NULL){
        cnt++;
        if(cnt==k)break;
        knode=knode->next;
    }
    node* prev=knode->back;
    node* front=knode->next;
    if(prev==NULL && front==NULL){
        return nullptr;
    }
    else if(prev==NULL){
        return deletehead(head);
    }
    else if(front==NULL){
        return deletetail(head);
    }
    prev->next=front;
    front->back=prev;
    knode->next=nullptr;
    knode->back=nullptr;
    return head;
}
node* inserthead(node* head,int val){
    node* newnode=new node(val);
    head->back=newnode;
    newnode->next=head;
    head=newnode;
    return head;
}
node* insertbeforetail(node* head,int val){
   node* tail=head;
   while(tail->next!=NULL){
   tail=tail->next;
   }
   node* newnode=new node(val);
   node* prev=tail->back;
   prev->next=newnode;
   newnode->next=tail;
   tail->back=newnode;
   newnode->back=prev;
   return head;
}
node* insertbeforek(node* head,int val,int k){
    if(k==1){
        return inserthead(head,val);
    }
    int cnt=0;
    node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    node* newnode= new node(val);
    node* prev=temp->back;
    prev->next=newnode;
    newnode->next=temp;
    temp->back=newnode;
    newnode->back=prev;
    return head;
}
void InsertBeforeNode(node* Node,int val){
    node* prev=Node->back;
    node* newnode=new node(val,Node,prev);
    prev->next=newnode;
    Node->back=newnode;
}
int number(node* head){
        int cnt=0;
        node* num=head;
        while(num!=nullptr){
            cnt++;
            num=num->next;
        }
        return cnt;
    }
int main() {
    vector<int> arr={1,4,7,9};
    // vector<int> arr={1,2};
    node* head=convertarr2dll(arr);
    // head=deletehead(head);
    // head=deletetail(head);
    // head=deleteK(head,2);
    // head=inserthead(head,6);
    // head=insertbeforetail(head,8);
    // head=insertbeforek(head,15,1);
    // InsertBeforeNode(head->next->next->next,100);
    int a=number(head);
    cout<<a;
    // print(head);

    return 0;
}