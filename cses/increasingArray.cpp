#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
int main()
{
    ll n;
    cin >> n;
    vl v(n, 0);
    for (auto &S : v)
        cin >> S;
    ll counter = 0;
    for (ll i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            counter += abs(v[i] - v[i - 1]);
            v[i] = v[i - 1];
        }
    }
    cout << counter << endl;
}
