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
  vll arr(x),prefsum(x);
  vector<pair<ll,ll>> brr(x);
  f(i,0,x){
    cin>>brr[i].first;
    brr[i].second=i;
  }

  sort(brr.begin(),brr.end());
  prefsum[0]=brr[0].first;
  f(i,1,x){
    prefsum[i]=brr[i].first+prefsum[i-1];
  }
  ll l;
  f(i,0,x){
    if(prefsum[i]<brr[i].first){
         l=i+1;
         break;
    }
  }
  f(i,0,x){
     brr[i].first=brr[i].second;
     brr[i].second+=l;
  }
  sort(brr.begin(),brr.end());
  f(i,0,x){
    cout<<brr[i].second<<" ";
  }
  cout<<endl;



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
