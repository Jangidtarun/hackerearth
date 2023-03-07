#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int r = 0, u = 0, b = 0, y = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'r')
                r++;
            else if (s[i] == 'u')
                u++;
            else if (s[i] == 'b')
                b++;
            else if (s[i] == 'y')
                y++;
        }
        int nop = min(r, min(u, min(b, y)));
        cout << "nop: " << nop << endl;
    }
}