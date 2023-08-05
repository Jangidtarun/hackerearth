#include <bits/stdc++.h>
using namespace std;
const int U = 1e9 + 7;
const int N = 1e3 + 10;

int parent[N];
int e[N];
int saize[N];

void make_set(int v)
{
    parent[v] = v;
    saize[v] = 1;
}

int find_set(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (saize[a] < saize[b])
            swap(a, b);
        parent[b] = a;
        saize[a] += saize[b];
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        make_set(i);
        cin >> e[i];
    }

    int k;
    cin >> k;
    while (k--)
    {
        int i, j;
        cin >> i >> j;
        union_set(i, j);
    }

    for (int i = 1; i <= n; i++)
        find_set(i);

    unordered_map<int, pair<int, int>> m;
    for (int i = 1; i <= n; i++)
    {
        int p = parent[i];
        if (m.find(p) != m.end())
        {
            if (m[p].first == e[i])
            {
                m[p].second++;
            }
            else if (m[p].first > e[i])
            {
                m[p].first = e[i];
                m[p].second = 1;
            }
        }
        else
        {
            m[p].first = e[i];
            m[p].second = 1;
        }
    }

    int ans = 1;
    for (auto val : m)
        ans = (ans * 1LL * val.second.second) % U;

    cout << ans << endl;
}