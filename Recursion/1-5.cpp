#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (str[start] != str[end])
        return false;
    checkPalindrome(str, start + 1, end - 1);
}

int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }

    return fibo(num - 1) + fibo(num - 2);
}

int main()
{
    int num = 8;
    cout << endl
         << fibo(num);
}