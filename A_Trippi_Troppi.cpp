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
    vector<string> s(3);
    f(i, 0, 3)
    {
        cin >> s[i];
    }
    f(i, 0, 3)
    {
        cout << s[i][0];
    }

    cout << endl;
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

// n -> n/2 -> n/4 -> n/8 ..... 1 => log(n)
// given sorted
// vector<int> arr = {1,2,3,4,6,7,12,13,15,16,17};

// string st = "00000001111111111";
// int s = 0;
// int e = st.length()-1;
// while(s<=e){
//    int mid = (s+e)/2;
//    if(st[mid]=='1' && mid-1>=0 && st[mid-1]=='0'){
//       cout<<mid<<endl;
//       cout<<"mil gya"<<endl;
//       break;
//    }else if(st[mid]=='1'){
//       e = mid-1;
//    }else{
//       s = mid +1;
//    }
// }