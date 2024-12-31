#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 5;

    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j < count; j++)
        {
            /* code */
            cout << "*" << " ";
        }
        cout << endl;
    }

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    for (int i = 0; i <= count; i++)
    {
        /* code */
        for (int j = 0; j < i; j++)
        {
            /* code */
            cout << "*" << " ";
        }

        cout << endl;
    }

    cout << endl;

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    for (int i = 1; i <= count; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    for (int i = 1; i <= count; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;

    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j < count - i; j++)
        {
            /* code */
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 1; j <= count - i; j++)
        {
            /* code */
            cout << j << " ";
        }
        cout << endl;
    }
}