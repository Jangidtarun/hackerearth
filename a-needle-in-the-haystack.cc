#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pattern, t_string;
        cin >> pattern >> t_string;
        vector<int> hmap1(26);
        vector<int> hmap2(26);
        bool flag = false;
        for (auto ch : pattern)
            hmap1[ch - 'a']++;
        for (int i = 0; i < pattern.length(); i++)
        {
            hmap2[t_string[i] - 'a']++;
        }
        if (hmap1 == hmap2)
        {
            cout << "YES\n";
            continue;
        }

        for (int i = 1; i < t_string.length() - pattern.length() + 1; i++)
        {
            hmap2[t_string[i - 1] - 'a']--;
            hmap2[t_string[i + pattern.length() - 1] - 'a']++;
            if (hmap1 == hmap2)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}