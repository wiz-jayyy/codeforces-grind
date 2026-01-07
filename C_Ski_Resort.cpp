#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define ld long double
#define f(i, x, y) for (ll i = x; i < y; i++)
#define cf(i, x, y) for (ll i = x; i <= y; i++)
#define rf(i, x, y) for (ll i = x - 1; i >= y; i--)
#define endl '\n'

long long fact(ll x)
{
    ll f = 1;
    for (ll i = x; i >= 1; i--)
    {
        f = f * i;
    }
    return f;
}

void solve()
{
    ll x, y, z, l = 0, final = 0, k = 0, m = 0;
    cin >> x >> y >> z;
    vll arr(x);
    vll arr1;
    f(i, 0, x)
    {
        cin >> arr[i];
    }
    f(i, 0, x)
    {
        if (arr[i] <= z)
        {
            l++;
        }
        else
        {
            if (l >= y)
            {
                arr1.push_back(l);
            }
            l = 0;
        }
    }
    if (l >= y)
    {
        arr1.push_back(l);
       }
    // //    for(auto i: arr1){
    // //     cout<<i<<" ";
    // //    }
    //    cout<<endl;
    for (ll i = 0; i < arr1.size(); i++)
    {
        ll sum= arr1[i]-y+1;
        final += (1ll*sum*(sum+1))/2;
    }
   

    cout << final << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
