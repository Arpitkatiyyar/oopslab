#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
    }
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;

}
void quickSort(vector<int> &arr,int low,int high){
    if(low<high){
        int pind = partition(arr,low,high);
        quickSort(arr,low,pind-1);
        quickSort(arr,pind+1,high);
    }
}
int main() {
    // vector<int> arr={15,27,18,45,37};
    vector<int> arr;
    int size;
    cout<<"enter size of array:";
    cin>>size;
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    quickSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}