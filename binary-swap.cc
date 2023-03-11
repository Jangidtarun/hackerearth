#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    // a = "1110", b = "1101";
    if (a.length() != b.length())
    {
        cout << -1 << endl;
        return EXIT_SUCCESS;
    }
    int nop = 0, nom = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] - b[i] > 0)
            nop++;
        else if (b[i] - a[i] > 0)
            nom++;
    }
    if (nop != nom)
    {
        cout << -1 << endl;
        return EXIT_SUCCESS;
    }
    cout << nop << endl;
}