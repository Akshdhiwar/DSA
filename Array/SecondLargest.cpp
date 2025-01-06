#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {85, 9, 3, 5, 4, 7, 9, 4, 256, 6, 3, 1, 25, 2, 5, 8, 45, 6, 9, 6, 3, 2, 1, 14, 55, 5, 8, 78, 96, 525, 5};
    int largest = -1;
    int secondLargest = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
    }
    cout << secondLargest;
}