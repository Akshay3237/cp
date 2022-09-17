#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define MOD 1000000007
#define int long long
#define ull unsigned long long
#define ld long double
#define clr(x) memset(x, 0, sizeof(x))

#define freach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define rfo(i, n) for (int i = n - 1; i >= 0; i--)
#define fo(i, n) for (int i = 0; i < n; i++)
#define foa(i, a, n) for (int i = a; i < n; i++)
#define endl "\n"

#define prec(n) fixed << setprecision(n)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.rbegin(), cont.rend()
#define sortall(x) sort(all(x))
#define sortrev(x) sort(all(x), greater<int>())
#define sortarr(n, x) sort(n, n + x)
#define middle(f, l) f + (l - f) / 2

#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int n, m, k, q, w, x, y, z, s, t;
vector<int> a ;
void solve()
{
    cin >> n;
    a.assign(n , 0) ; 
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
int32_t main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
