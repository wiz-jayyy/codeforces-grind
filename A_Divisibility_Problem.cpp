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
 
  ll x,y;
  cin>>x>>y;
  if(x%y==0){
    cout<<0<<endl;
  }else{
    if(x<y){
        cout<<abs(x-y)<<endl;
    }else{
        cout<<(y*((x/y)+1))-x<<endl;
    }
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
