#include<iostream>
using namespace std;
int main(){
    int arr[10]={54,26,95,73,18,24,34,21,15,82};
    int value=arr[0];
    for (int i = 0; i < 10; i++)        
    {
        if(arr[i]<value){
            value=arr[i];
        }
        
    }
    cout<<value;
}