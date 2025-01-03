#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {85, 9, 3, 5, 4, 7, 9, 4, 56, 6, 3, 1, 25, 2, 5, 8, 45, 6, 9, 6, 3, 2, 1, 14, 55, 5, 8, 78, 96, 525, 5};

    for (size_t i = 0; i < arr.size(); i++)
    {
        /* code */
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            /* code */
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] ^ arr[j + 1];
                arr[j + 1] = arr[j] ^ arr[j + 1];
                arr[j] = arr[j] ^ arr[j + 1];
            }
        }
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
}