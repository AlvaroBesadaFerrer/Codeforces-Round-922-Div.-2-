#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long cp;
    cin >> cp;

    while (cp--)
    {
        int a, b;
        cin >> a >> b;

        cout << (b / 2) * a << "\n";
    }
}