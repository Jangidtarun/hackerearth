#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if (a.length() != b.length())
    {
        cout << "NO\n";
        return EXIT_SUCCESS;
    }

    for (int i = 1; i < a.length(); i++)
    {
        if (b[i] - a[i] > b[i - 1] - a[i - 1])
        {
            cout << "NO\n";
            return EXIT_SUCCESS;
        }
    }
    cout << "YES\n";
}