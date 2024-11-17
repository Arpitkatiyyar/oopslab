#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"row:";
    cin>>row;
    for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <2*(row-i-1)+1; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j <=i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
        
    }
    return 0;
}