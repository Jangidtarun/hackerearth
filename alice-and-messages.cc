#include <bits/stdc++.h>
using namespace std;

int findMessages(int n, vector<string> a)
{
    int ans = 0;
    unordered_map<string, int> hmap;
    for (int i = 0; i < n; i++)
    {
        if (hmap.find(a[i]) != hmap.end())
            hmap[a[i]]--;
        else
        {
            for (int j = 0; j < a[i].length(); j++)
                a[i][j] = 'z' + 'a' - a[i][j];
            hmap[a[i]]++;
            ans++;
        }
    }
    return ans;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int out_ = findMessages(n, a);
    cout << out_ << endl;
}