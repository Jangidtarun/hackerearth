#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> ammo(n);
    for (int i = 0; i < n; i++)
        cin >> ammo[i].first >> ammo[i].second;

    auto cmp = [](pair<string, int> a, pair<string, int> b)
    {
        if (a.second != b.second)
            return a.second > b.second;
        return a.first < b.first;
    };

    sort(ammo.begin(), ammo.end(), cmp);
    for (auto val : ammo)
        cout << val.first << " " << val.second << endl;
}