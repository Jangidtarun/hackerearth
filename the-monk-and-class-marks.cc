#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    auto comp = [](pair<string, int> p1, pair<string, int> p2)
    {
        if (p1.second > p2.second)
            return true;
        else if (p1.second == p2.second)
            if (p1.first < p2.first)
                return true;
        return false;
    };

    multiset<pair<string, int>, decltype(comp)> rec(comp);
    for (int i = 0; i < n; i++)
    {
        string name;
        int marks;
        cin >> name >> marks;
        rec.insert({name, marks});
    }

    for (auto val : rec)
        cout << val.first << " " << val.second << endl;
}