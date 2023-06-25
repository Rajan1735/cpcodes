#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<int> v(n, 0);
    for (auto &it : v)
    {
        cin >> it;
    }
    ll counter = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] < v[i + 1])
        {
            counter += abs(v[i] - v[i + 1]);
            v[i + 1] = v[i];
        }
    }
    cout << counter << endl;

    return 0;
}
