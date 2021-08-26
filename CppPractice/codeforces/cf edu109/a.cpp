#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long
#define fi for (ll i = 0; i < n; i++)
#define pb push_back
#define countsetbit __builtin_popcount

using namespace std;
int main()
{
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll k;
        cin >> k;
        if (k == 100 || k == 0)
        {
            cout << "1\n";
            continue;
        }

        ll a = k, b = 100 - k;
        ll num = __gcd(a, b);
        while (num != 1)
        {
            a /= num;
            b /= num;
            num = __gcd(a, b);
        }
        ll ans = a + b;
        cout << ans << "\n";
    }

    return 0;
}
