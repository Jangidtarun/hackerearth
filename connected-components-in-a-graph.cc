#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> graph[N];
bool vis[N];

void dfs(int vertex)
{
    vis[vertex] = true;
    for (int child : graph[vertex])
    {
        if (!vis[child])
            dfs(child);
    }
}

int main()
{
    int v, e;
    cin >> v >> e;
    int ct = 0;
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    for (int i = 1; i <= v; i++)
    {
        if (vis[i])
            continue;
        dfs(i);
        ct++;
    }

    cout << ct << endl;
}