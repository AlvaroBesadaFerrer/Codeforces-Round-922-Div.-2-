#include <bits/stdc++.h>

using namespace std;

int main()
{

    int cp;
    cin >> cp;
    while (cp--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back({a, 0});
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v[i].second = a;
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            cout << v[i].first << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << v[i].second << " ";
        }
    }
}