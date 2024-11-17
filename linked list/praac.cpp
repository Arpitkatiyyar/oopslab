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
// node* arr2ll(vector<int> &arr){
//     node* head=new node(arr[0]);
//     node* mover=head;
//     for(int i=1;i<arr.size();i++){
//         node* temp=new node(arr[i]);
//         mover->next=temp;
//         mover=temp;
//         // return head;
//     }
//         return head;

// }
node* arr2ll(vector<int> &arr){
    node* head=nullptr;
    node* mover=head;
    for(int i=0;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover=temp;
        mover->next=nullptr;
        mover=mover->next;
        // return head;
    }
        return head;

}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main() {
    vector<int> arr={1,4,3,2,6};
    node* head=arr2ll(arr);
    print(head);
    return 0;
}