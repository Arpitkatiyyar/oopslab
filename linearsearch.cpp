// #include <iostream>
// using namespace std;
// int linearsearch(int arr[], int n, int X)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == X)
//         {
//             return i;
//         }
//     }
//     return -1;
//     }

// int main()
// {
//     int i;
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     int arr[n];
//     int X;
//     cout << "enter elements:"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     };
//     cout << "enter value of X"<<endl;
//     cin >> X;

//     int result = linearsearch(arr, n, X);
//     if (result != -1)
//     {
//         cout << "result is found at position: " << result+1<<endl;
//     }
//     else
//     {
//         cout << "element not found";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int X)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == X)
        {
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter number of elements of array:";
    cin>>n;
    cout<<"enter elements of array:"<<endl;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int X;
    cout<<"enter value of X:";
    cin>>X;
    int result=linearsearch(arr,n,X);
    if (result!=-1)
    {
        cout<<"element is found at position:"<<result+1<<endl;
    }
    else
    {
        cout<<"element is not found in this array:";
    }
    return 0;
    
}