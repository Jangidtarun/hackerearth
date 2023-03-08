#include <bits/stdc++.h>
using namespace std;

int solve(string s, int k)
{
    int n = s.length();
    int nop = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> hmap(26);
        for (int j = min(i + k, n) - 1; j >= i; j--)
            if (s[j] != '#')
                hmap[s[j] - 'a']++;

        for (int j = min(i + k, n) - 1; j >= i; j--)
            if (s[j] != '#' and hmap[s[j] - 'a'] > 1)
            {
                hmap[s[j] - 'a']--;
                s[j] = '#';
                nop++;
            }
    }
    return nop;
}

int main()
{

    string s;
    int k;
    // cin >> s >> k;
    s = "ababc";
    k = 3;

    int out_ = solve(s, k);
    cout << out_ << endl;
}