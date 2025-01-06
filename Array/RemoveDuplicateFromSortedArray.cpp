#include <bits/stdc++.h>
using namespace std;

void QuickSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pivot = arr[start];
    int i = start;
    int j = end;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= end)
        {
            /* code */
            i++;
        }
        while (arr[j] > pivot && j > start)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[start], arr[j]);

    QuickSort(arr, start, j - 1);
    QuickSort(arr, j + 1, end);
}

int main()
{
    vector<int> arr = {85, 9, 3, 5, 4, 7, 9, 4, 56, 6, 3, 1, 25, 2, 5, 8, 45, 6, 9, 6, 3, 2, 1, 14, 55, 5, 8, 78, 96, 525, 5};
    QuickSort(arr, 0, arr.size() - 1);

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    int i = 0;

    for (int j = 0; j < arr.size(); j++)
    {
        /* code */
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    for (int j = 0; j <= i; j++)
    {
        cout << arr[j] << " ";
    }
}