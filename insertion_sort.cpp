#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[5] = {10, 43, 28, 54, 74};
    insertion_sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// void insertion_sort(int arr[],int n){
//     for (int i = 1; i < n; i++)
//     {
//         int key=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//         }
//         arr[j]=key;
//     }

// }
// int main() {
//     int arr[5] = {10, 43, 28, 54, 74};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     insertion_sort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
//     // return 0;
// // }