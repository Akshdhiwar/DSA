#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> ds = {};
    int p1 = start;
    int p2 = mid + 1;

    while (p1 <= mid && p2 <= end)
    {
        if (arr[p1] > arr[p2])
        {
            ds.push_back(arr[p2]);
            p2++;
        }
        else
        {
            ds.push_back(arr[p1]);
            p1++;
        }
    }

    while (p1 <= mid)
    {
        ds.push_back(arr[p1]);
        p1++;
    }

    while (p2 <= end)
    {
        ds.push_back(arr[p2]);
        p2++;
    }

    for (int i = 0; i < ds.size(); i++)
    {
        arr[start + i] = ds[i];
    }
}

void MergeSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);
    Merge(arr, start, mid, end);
}

int main()
{
    vector<int> arr = {85, 9, 3, 5, 4, 7, 9, 4, 56, 6, 3, 1, 25, 2, 5, 8, 45, 6, 9, 6, 3, 2, 1, 14, 55, 5, 8, 78, 96, 525, 5};
    MergeSort(arr, 0, arr.size() - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}