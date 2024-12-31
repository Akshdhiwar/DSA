#include <bits/stdc++.h>
using namespace std;

int main()
{

    int count = 4;

    // * * * * * * * * * *
    // * * * *     * * * *
    // * * *         * * *
    // * *             * *
    // *                 *
    // *                 *
    // * *             * *
    // * * *         * * *
    // * * * *     * * * *
    // * * * * * * * * * *

    for (int i = 0; i <= count * 2; i++)
    {
        if (i == 5)
            continue;
        int starCount = count - i;
        if (i > count)
        {
            starCount = i - count;
        }
        /* code */
        for (int j = 0; j < starCount; j++)
        {
            /* code */
            cout << "*" << " ";
        }

        int spaceCount = i * 2;
        if (i > count)
            spaceCount = count * 2 - (i - count) * 2;

        for (int j = 0; j < spaceCount; j++)
        {
            cout << " " << " ";
        }

        for (int j = 0; j < starCount; j++)
        {
            /* code */
            cout << "*" << " ";
        }

        cout << endl;
    }

    cout << endl;

    // *                             *
    // * *                         * *
    // * * *                     * * *
    // * * * *                 * * * *
    // * * * * *             * * * * *
    // * * * * * *         * * * * * *
    // * * * * * * *     * * * * * * *
    // * * * * * * * * * * * * * * * *
    // * * * * * * *     * * * * * * *
    // * * * * * *         * * * * * *
    // * * * * *             * * * * *
    // * * * *                 * * * *
    // * * *                     * * *
    // * *                         * *
    // *                             *

    for (int i = 1; i <= count * 2; i++)
    {
        /* code */
        int starCount = i;
        if (i > count)
            starCount = count * 2 - i;
        for (int j = 1; j <= starCount; j++)
        {
            /* code */
            cout << "*" << " ";
        }

        int spaceCount = count * 2 - i * 2;
        if (i > count)
            spaceCount = i * 2 - count * 2;

        for (int j = 1; j <= spaceCount; j++)
        {
            /* code */
            cout << " " << " ";
        }

        /* code */
        for (int j = 1; j <= starCount; j++)
        {
            /* code */
            cout << "*" << " ";
        }

        cout << endl;
    }

    cout << endl;

    // * * * * * * * *
    // *             *
    // *             *
    // *             *
    // *             *
    // *             *
    // *             *
    // * * * * * * * *

    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j < count; j++)
        {
            /* code */
            if (i == 0 || j == 0 || i == count - 1 || j == count - 1)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << " " << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    // 4444444
    // 4333334
    // 4322234
    // 4321234
    // 4322234
    // 4333334
    // 4444444

    for (int i = 0; i < count * 2 - 1; i++)
    {
        /* code */
        for (int j = 0; j < count * 2 - 1; j++)
        {
            /* code */
            int top = i;
            int left = j;
            int bottom = count * 2 - 2 - i;
            int right = count * 2 - 2 - j;
            // cout << top << " top " << left << " left " << bottom << " bottom " << right << " right " << endl;
            cout << count - min(min(left, top), min(right, bottom));
        }
        cout << endl;
    }
}
