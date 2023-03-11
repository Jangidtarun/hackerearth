#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;
    vector<int> hmap(26);
    for (int i = 0; i < k; i++)
    {
        hmap[s[i] - 'a']++;
    }
    string ans = "";
    for (int i = 0; i < 26; i++)
    {
        if (hmap[i] > 0)
        {
            hmap[i]--;
            ans.push_back('a' + i);
            break;
        }
    }
    for (int i = k; i < s.length(); i++)
    {
        hmap[s[i] - 'a']++;
        for (int j = 0; j < 26; j++)
        {
            if (hmap[j] > 0)
            {
                hmap[j]--;
                ans.push_back('a' + j);
                break;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        while (hmap[i] > 0)
        {
            hmap[i]--;
            ans.push_back('a' + i);
        }
    }
    cout << ans << endl;
}