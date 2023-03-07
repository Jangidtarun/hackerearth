#include <bits/stdc++.h>
using namespace std;

bool make_equal(string t, string s)
{
    int n = t.length();
    vector<int> hmap(26);
    for (int i = 0; i < n; i++)
    {
        hmap[t[i] - 'a']++;
        hmap[s[i] - 'a']--;
    }
    for (auto val : hmap)
        if (val % 2 == 1)
            return false;
    return true;
}

int main()
{
    string s, t;
    cin >> s >> t;
    bool out_ = make_equal(t, s);
    cout << (out_ ? 1 : 0) << endl;
}