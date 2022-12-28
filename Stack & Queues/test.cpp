#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // Declaring umap to be of <string, int> type
    // key will be of string type and mapped value will
    // be of int type
    int arr[] = {1, 1, 1, 1};
    int N = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> mpp;
    int count = 0, sum = 4;
    // inserting values by using [] operator

    for (int i = 0; i < N; i++)
    {
        if (mpp[sum - arr[i] % sum])
        {
            count += mpp[sum - arr[i] % sum];
        }
        mpp[arr[i] % sum]++;
    }

    cout << count;

    // Traversing an unordered map
    // for (int i = 0; i < 13; i++)
    //     cout << mpp[arr[i]] << " ";
}

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main()
// {
//     // Declaring umap to be of <string, int> type
//     // key will be of string type and mapped value will
//     // be of int type
//     int arr1[] = {2, 2};
//     int arr2[] = {3, 3};
//     int n = sizeof(arr1) / sizeof(arr1[0]);
//     int m = sizeof(arr2) / sizeof(arr2[0]);

//     if (n != m)
//     {
//         cout << "No";
//         return 0;
//     }

//     unordered_map<int, int> mpp1;
//     unordered_map<int, int> mpp2;

//     for (int i = 0; i < n; i++)
//     {

//         mpp1[arr1[i]]++;
//     }
//     for (int i = 0; i < n; i++)
//     {

//         mpp2[arr2[i]]++;
//     }
//     cout << (mpp1[arr1[1]] != mpp2[arr2[1]]);

//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (mpp[arr1[i]] != mpp[arr2[i]] || mpp[arr1[i]] < 2)
//     //     {
//     //         cout << "No";
//     //         return 0;
//     //     }
//     // }
// }

// Traversing an unordered map
// for (int i = 0; i < 13; i++)
//     cout << mpp[arr[i]] << " ";
