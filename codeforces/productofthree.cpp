#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i;
        ll cnt = 0, ans = 0, sum = 0;
        cin >> n;

        ll f[3];

        for (i = 2; i * i < n and cnt < 2; i++)
            if (n % i == 0)
                f[cnt++] = i, n /= i;

        if (cnt != 2)
            cout << "NO" << endl;
        else
            printf("YES\n%lld %lld %lld\n", f[0], f[1], n);
    }

    return 0;
}
