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



void solve(){
 
    ll x;
    cin>>x;
    string s;
    cin>>s;
    vll arr(x);
    map<char,ll> m;
    f(i,0,x){
       m[s[i]]++;
       arr.push_back(m.size());
    }
    ll ans=accumulate(arr.begin(),arr.end(),0);
     cout<<ans<<endl;
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1;
  cin >> t;
  while (t--){
    solve();
  }
}
