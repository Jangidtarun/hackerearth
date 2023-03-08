#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int li = 0;
        int nop = 1;
        for (int i = 0; i < s.length(); i++)
            if (s[i] != s[li])
            {
                li = i;
                nop++;
            }
        cout << nop << endl;
    }
}