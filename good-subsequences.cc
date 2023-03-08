#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int ram = 1e9 + 7;
    while (t--)
    {
        string s;
        cin >> s;
        vector<int> hmap(26);
        for (int i = 0; i < s.length(); i++)
            hmap[s[i] - 'a']++;

        long long int ml = 1;
        for (auto val : hmap)
            if (val != 0)
            {
                ml *= val;
                ml %= ram;
            }
        cout << ml << endl;
    }
}