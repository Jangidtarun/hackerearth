#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        set<long long> nwala;
        for (int i = 0; i < n; i++)
        {
            long long tmp;
            cin >> tmp;
            nwala.insert(tmp);
        }
        for (int i = 0; i < m; i++)
        {
            long long tmp;
            cin >> tmp;
            if (nwala.find(tmp) != nwala.end())
                cout << "YES\n";
            else
                cout << "NO\n";
            nwala.insert(tmp);
        }
    }
}