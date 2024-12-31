#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 8;

    //         *
    //       * * *
    //     * * * * *
    //   * * * * * * *
    // * * * * * * * * *

    for (int i = 0; i < count; i++)
    {
        /* spaces */
        for (int j = 0; j < count - i - 1; j++)
        {
            /* code */
            cout << " " << " ";
        }

        for (int j = 0; j < i * 2 + 1; j++)
        {
            /* code */
            cout << "*" << " ";
        }

        cout << endl;
    }

    cout << endl;

    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *

    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j < i; j++)
        {
            /* code */
            cout << " " << " ";
        }

        for (int j = 0; j < count * 2 - (i * 2) - 1; j++)
        {
            /* code */
            cout << "*" << " ";
        }

        cout << endl;
    }

    cout << endl;

    //         *
    //       * * *
    //     * * * * *
    //   * * * * * * *
    // * * * * * * * * *
    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *

    for (int i = 0; i < count; i++)
    {
        /* spaces */
        for (int j = 0; j < count - i - 1; j++)
        {
            /* code */
            cout << " " << " ";
        }

        for (int j = 0; j < i * 2 + 1; j++)
        {
            /* code */
            cout << "*" << " ";
        }

        cout << endl;
    }
    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j < i; j++)
        {
            /* code */
            cout << " " << " ";
        }

        for (int j = 0; j < count * 2 - (i * 2) - 1; j++)
        {
            /* code */
            cout << "*" << " ";
        }

        cout << endl;
    }

    cout << endl;

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    for (int i = 0; i < count * 2; i++)
    {
        /* code */
        int starCount = i;
        if (i > count)
            starCount = count * 2 - i;

        for (int j = 0; j < starCount; j++)
        {
            /* code */
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;

    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1

    for (int i = 0; i < count; i++)
    {
        int num = 1;
        if (i % 2 == 0)
        {
            num = 1;
        }
        else
        {
            num = 0;
        }

        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << num << " ";
            num = 1 - num;
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= count; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << j << " ";
        }

        for (int j = 0; j < count * 2 - i * 2; j++)
        {
            cout << " " << " ";
        }

        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << endl;

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20 21
    // 22 23 24 25 26 27 28
    // 29 30 31 32 33 34 35 36

    int totalCount = 1;
    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << totalCount << " ";
            totalCount++;
        }
        cout << endl;
    }
}