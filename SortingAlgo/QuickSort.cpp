#include <bits/stdc++.h>
using namespace std;

void QuickSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivit = arr[start];

    int i = start;
    int j = end;

    while (i < j)
    {
        while (arr[i] <= pivit && i < end)
        {
            i++;
        }
        while (arr[j] > pivit && j >= start + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[start], arr[j]);

    int midIndex = j;

    QuickSort(arr, start, midIndex - 1);
    QuickSort(arr, midIndex + 1, end);
}

int main()
{
    // vector<int> arr = {85, 9, 3, 5, 4, 7, 9, 4, 56, 6, 3, 1, 25, 2, 5, 8, 45, 6, 9, 6, 3, 2, 1, 14, 55, 5, 8, 78, 96, 525, 5};
    vector<int> arr = {5, 7, 4, 1, 3, 6, 8, 9, 2};
    QuickSort(arr, 0, arr.size() - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}