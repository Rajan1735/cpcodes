#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    // fastread();

    ll n;
    cin >> n;

    vector<int> v;
    stack<int> st;

    for (ll i = 1; i <= 5000; i++)
    {
        if (i < 10)
        {
            v.pb(i);
        }
        else
        {
            int a = i, d;
            while (a >= 10)
            {
                d = a % 10;
                a = a / 10;
                st.push(d);
            }
            st.push(a);
            while (!st.empty())
            {
                d = st.top();
                st.pop();
                v.pb(d);
            }
        }
    }
    cout << v[n - 1] << endl;
    return 0;
}
