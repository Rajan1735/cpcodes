#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll INF = 1e15;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x;
    cin >> x;
    ll ansa = INF, ansb = INF;
    for (ll f = 1; f * f <= x; f++)
    {
        if (x % f == 0)
        {
            if (__gcd(f, x / f) == 1)
            {
                if (x / f < ansb)
                {
                    ansa = f;
                    ansb = x / f;
                }
            }
        }
    }
    cout << ansa << ' ' << ansb;
    return 0;
}