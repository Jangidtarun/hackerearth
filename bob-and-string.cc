#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ss, st;
        cin >> ss >> st;
        vector<int> hmap_ss(26);
        vector<int> hmap_st(26);
        for (int i = 0; i < ss.length(); i++)
            hmap_ss[ss[i] - 'a']++;
        for (int i = 0; i < st.length(); i++)
            hmap_st[st[i] - 'a']++;
        for (int i = 0; i < 26; i++)
            hmap_ss[i] = abs(hmap_ss[i] - hmap_st[i]);
        int nop = accumulate(hmap_ss.begin(), hmap_ss.end(), 0);
        cout << "nop: " << nop << endl;
    }
}