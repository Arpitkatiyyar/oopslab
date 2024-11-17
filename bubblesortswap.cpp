// #include <iostream>
// #include <stdbool.h>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter ssize of array:";
//     cin >> n;
//     int arr[n];
//     cout<<"enter elements of array:"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     };
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool swapp = false;
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j + 1] < arr[j])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//             swapp = true;
//         }
//         if (swapp != true)
//         {
//             break;
//         }

//     }
//     cout << "output" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0||n==1){
            return 1;
        }
    else{
        return n*factorial(n-1);
            
    }
}
int main() {
    cout<<factorial(5);
    return 0;
}