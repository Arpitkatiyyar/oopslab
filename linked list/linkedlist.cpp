#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=nullptr;
    }
    node(int d,node* l){
        data=d;
        next=l;
    }
    
};
node* arr2ll(vector<int> &arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
        // return head;
    }
        return head;

}
void print(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node* removehead(node* head){
    if(head==NULL){
        return head;
    }
    node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
node* removetail(node* head){
    if(head==NULL||head->next==NULL){
        return nullptr;
    }
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
node* remove(node* head,int k){
    if(head==NULL){return head;}
    if(k==1){
        node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int count=0;
    node* temp=head;
    node* prev=NULL;
    while(head!=NULL){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
node* removebyel(node* head,int el){
    if(head==NULL){return head;}
    if(head->data==el){
        node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    node* temp=head;
    node* prev=NULL;
    while(head!=NULL){
        if(temp->data==el){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
node* inserthead(node* head,int v){
    node* temp=new node(v,head);
    return temp;
}
node* inserttail(node* head,int v){
    if(head==NULL){
        return new node(v);
    }
    node* newnode= new node(v,head);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=nullptr;
    return head;
}
node* insertposition(node* head,int v,int k){
    if(head==NULL){
        if(k==1){
            return new node(v);
        }
        else{ return head;} 
    }
    if(k==1){
        return new node(v,head);
    }
    int count=0;
    node* temp=head;
    while(temp!=NULL){
        count++;
        if(count==(k-1)){
            node* newnode=new node(v);
            newnode->next=temp->next;
            temp->next=newnode;
            break;
        }
        temp=temp->next;
        return head;
    }
}
node* insertvalue(node* head,int v,int el){
    if(head==NULL){
        return NULL;
    }
    if(head->data==v){
        return new node(el,head);
    }
    node* temp=head;
    while(temp->next!=NULL){
        if(temp->next->data==v){
            node* newnode=new node(el);
            newnode->next=temp->next;
            temp->next=newnode;
            break;
        }
        temp=temp->next;
    }
    return head;
}
int main() {
    vector<int> arr={1,4,3,2,6};
    node* head=arr2ll(arr);
    // head=removehead(head);
    // head=removetail(head);
    // head=remove(head,5);
    // head=removebyel(head,4);
    // head=inserthead(head,5);
    // head=inserttail(head,9);
    // head=insertposition(head,4,2);
    head=insertvalue(head,3,9);
    print(head);
    return 0;
}