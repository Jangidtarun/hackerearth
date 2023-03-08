#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s, t, r, tmp;
    int j = 0;
    cin >> s >> t;
    while (1)
    {
        r = s.substr(j, n);
        tmp = t.substr(0, n - j);
        if (r == tmp)
        {
            break;
        }
        j++;
    }
    cout << j;
    return 0;
}
