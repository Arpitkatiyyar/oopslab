#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int n1=low;
    int n2=mid+1;
    while(n1<=mid&&n2<=high){
        if(arr[n1]<arr[n2]){
            temp.push_back(arr[n1]);
            n1++;
        }
        else{
            temp.push_back(arr[n2]);
            n2++;
        }
    }
    while(n1<=mid){
        temp.push_back(arr[n1]);
        n1++;
    }
    while(n2<=high){
        temp.push_back(arr[n2]);
        n2++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
   
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
}
void mergeSort(vector<int> &arr,int low,int high) {
    if(low>=high) return;
    int mid=low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
    
}

// void display(){
//     for(int i=0;i < temp.size();i++){
//         cout<<temp[i];
//     }
// }
int main() {
    vector<int> arr{10,85,29,64,17,93};
    mergeSort(arr, 0 ,arr.size()-1);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}