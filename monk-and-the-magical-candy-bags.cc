#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<long long int> candies;
        // unordered_set<int> candies;
        for (int i = 0; i < n; i++)
        {
            long long int tmp;
            cin >> tmp;
            candies.insert(tmp);
        }

        long long int consumed = 0;
        // O(k*log(n))
        while (k--)
        {
            auto maxit = --candies.end(); // O(1)
            // auto maxit = max_element(candies.begin(), candies.end());
            long long int maxcandy = 0;
            if (!candies.empty())
                maxcandy = *maxit;
            consumed += maxcandy;
            candies.erase(maxit);         // O(log(n))
            candies.insert(maxcandy / 2); // O(log(n))
        }

        cout << consumed << endl;
    }
}