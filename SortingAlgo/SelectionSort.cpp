#include <bits/stdc++.h>
using namespace std;

// Selection Sort
int main()
{
    vector<int> arr = {85, 9, 3, 5, 4, 7, 9, 4, 56, 6, 3, 1, 25, 2, 5, 8, 45, 6, 9, 6, 3, 2, 1, 14, 55, 5, 8, 78, 96, 525, 5};
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        for (int j = i + 1; j < arr.size(); j++)
        {
            /* code */
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] ^ arr[j];
                arr[j] = arr[i] ^ arr[j];
                arr[i] = arr[i] ^ arr[j];
            }
        }
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
}