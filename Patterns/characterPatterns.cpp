#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 5;

    // A
    // A B
    // A B C
    // A B C D
    // A B C D E
    // A B C D E F
    // A B C D E F G
    // A B C D E F G H

    for (int i = 0; i < count; i++)
    {
        /* code */
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            /* code */
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // A B C D E F G H
    // A B C D E F G
    // A B C D E F
    // A B C D E
    // A B C D
    // A B C
    // A B
    // A

    for (int i = 0; i < count; i++)
    {
        /* code */
        for (char j = 'A'; j <= 'A' + count - i - 1; j++)
        {
            /* code */
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // A
    // B B
    // C C C
    // D D D D
    // E E E E E
    // F F F F F F
    // G G G G G G G
    // H H H H H H H H

    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            /* code */
            char ch = 'A' + i;
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << endl;

    // E
    // D E
    // C D E
    // B C D E
    // A B C D E

    for (int i = 0; i < count; i++)
    {
        /* code */
        char ch = 'A' + count - i - 1;
        for (char j = ch; j <= 'A' + count - 1; j++)
        {
            /* code */
            cout << j << " ";
        }
        cout << endl;
    }
}