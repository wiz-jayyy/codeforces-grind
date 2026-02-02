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
    
  ll x,y,z;
  cin>>x>>y>>z;
  if(y%z==0){
    cout<<0<<endl;
  }else{
    //ll k=min(y-(z*(y/z)),abs(y-(y%z)));
    // 
   ll k= abs(y-(y%z));
    cout<<k<<endl;
  }

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
