#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int parent[N];
int saije[N];

void make_set(int a)
{
    parent[a] = a;
    saije[a] = 1;
}

int find_set(int a)
{
    if (a == parent[a])
        return a;
    return parent[a] = find_set(parent[a]);
}

void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (saije[a] < saije[b])
            swap(a, b);
        parent[b] = a;
        saije[a] += saije[b];
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        make_set(i);

    while (k--)
    {
        int i, j;
        cin >> i >> j;
        union_set(i, j);
    }

    int ct = 0;
    for (int i = 1; i <= n; i++)
    {
        if (find_set(i) == i)
            ct++;
    }

    cout << ct << endl;
}