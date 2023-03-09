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

        string derived_vowels = "";
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        for (int i = 0; i < s.length(); i++)
            if (vowels.find(s[i]) != vowels.end())
                derived_vowels.push_back(s[i]);
        // cout << derived_vowels << endl;
        bool good = true, worst = true, bad = false;
        for (int i = 1; i < derived_vowels.length(); i++)
        {
            if (derived_vowels[i] >= derived_vowels[i - 1])
                continue;
            else
                good = false;
        }
        if (good)
            cout << "Good\n";
        if (!good)
            for (int i = 1; i < derived_vowels.length(); i++)
            {
                if (derived_vowels[i] <= derived_vowels[i - 1])
                    continue;
                else
                    worst = false;
            }
        if (!good and worst)
            cout << "Worst\n";
        if (!good and !worst)
            cout << "Bad\n";
    }
}