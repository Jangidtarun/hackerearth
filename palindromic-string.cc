#include <bits/stdc++.h>
using namespace std;

int main()
{
    string pal;
    cin >> pal;
    int begin = 0;
    int end = pal.length() - 1;
    bool flag = true;
    while (begin < end)
    {
        if (pal[begin] != pal[end])
        {
            flag = false;
            break;
        }
        begin++;
        end--;
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}