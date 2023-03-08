#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s, t;
    cin >> n >> s >> t;
    int sind = 0;
    while (sind < s.length())
    {
        string s_tmp = s.substr(sind, n);
        string t_tmp = t.substr(0, n - sind);
        if (s_tmp == t_tmp)
            break;
        sind++;
    }
    cout << sind << endl;
}