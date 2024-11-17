// #include <iostream>
// #include <algorithm>
// using namespace std;
// // int display(){
// //     int arr[10];
// //     for (int i = 0; i < 10; i++)
// //     {
// //         return arr[i];
// //     }

// // }
// int main(){
//     int arr[10]={12,65,122,87,45,86,17,64,21,25};
//    //int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = 0; j < 9-i; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//                 // int temp = arr[j];
//                 // arr[j] = arr[j + 1];
//                 // arr[j + 1] = temp;
//             }

//         }

//     }
//  cout << "Sorted array: ";
//     for (int i = 0; i < 10; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cout << "enter size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "enter elements of array." << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}