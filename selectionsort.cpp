#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cout<<"size of array:";
    cin>>n;
    int a[n];
    cout<<"enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // implementing slection sort.
    for (int  i = 0; i < n; i++)
    {   int min=i;
        for (int j = i; j < n; j++)
        {
            if(a[min]>a[j]){
                min=j;
            }
        }
        swap(a[min],a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
}