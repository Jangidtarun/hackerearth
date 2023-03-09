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

        // check for good
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        char last_visit_vowel = 'a';
        for (int i = 0; i < s.length(); i++)
        {
            if (vowels.find(s[i]) != vowels.end() and s[i] - 'a' >= last_visit_vowel - 'a')
            {
                last_visit_vowel = s[i];
            }
        }
    }
}