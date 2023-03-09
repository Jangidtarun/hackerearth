#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        map<char, int> opening = {{'(', 0}, {'{', 0}, {'[', 0}};
        map<char, int> closing = {{')', 0}, {'}', 0}, {']', 0}};
        int p = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (opening.find(a[i]) != opening.end())
                opening[a[i]]++;
            else
                closing[a[i]]++;
        }
        auto val1 = opening.begin();
        auto val2 = closing.begin();
        for (; val1 != opening.end(), val2 != closing.end(); val1++, val2++)
            p += abs(val1->second - val2->second);
        cout << a.length() - p << endl;
    }
}