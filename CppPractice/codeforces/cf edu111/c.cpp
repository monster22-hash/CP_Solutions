#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // ordered_set pbds
#include <ext/pb_ds/tree_policy.hpp>     // ordered_set pbds
using namespace std;
using namespace __gnu_pbds;

#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long
#define ull unsigned long long
#define dd double
#define lld long double
#define mkp make_pair
#define pi pair<ll, ll>
#define pii pair<ll, pi>
#define F first
#define S second
#define fi for (ll i = 0; i < n; i++)
#define pb push_back
#define countsetbit __builtin_popcount
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << "\n";
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(dd t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.F);
    cerr << ",";
    _print(p.S);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

int main()
{
    //system("color C");
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        ll ans = 2 * n - 1;
        ll temp = 0; // good subarray
        for (int i = 0; i < n - 2; i++)
        {
            if ((arr[i] <= arr[i + 1] and arr[i + 1] <= arr[i + 2]) or (arr[i] >= arr[i + 1] and arr[i + 1] >= arr[i + 2]))
            {
            }
            else
                temp++;
        }

        for (int i = 0; i < n - 3; i++)
        {
            if ((arr[i] <= arr[i + 1] and arr[i + 1] <= arr[i + 2]) or (arr[i] >= arr[i + 1] and arr[i + 1] >= arr[i + 2]))
            {
            }
            else if ((arr[i + 1] <= arr[i + 2] and arr[i + 2] <= arr[i + 3]) or (arr[i + 1] >= arr[i + 2] and arr[i + 2] >= arr[i + 3]))
            {
            }
            else if ((arr[i] <= arr[i + 1] and arr[i + 1] <= arr[i + 3]) or (arr[i] >= arr[i + 1] and arr[i + 1] >= arr[i + 3]))
            {
            }
            else if ((arr[i] <= arr[i + 2] and arr[i + 2] <= arr[i + 3]) or (arr[i] >= arr[i + 2] and arr[i + 2] >= arr[i + 3]))
            {
            }
            else
            {
                ans++;
            }
        }
        ans += temp;
        cout << ans << "\n";
    }

    return 0;
}
