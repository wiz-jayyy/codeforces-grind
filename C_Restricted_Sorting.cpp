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
 
  ll x,maxi=INT_MIN,mini=INT_MAX,ans=INT_MAX;
  cin>>x;
  vll arr(x),brr(x);
  bool stat=false;
  f(i,0,x){
    cin>>arr[i];
    maxi=max(maxi,arr[i]);
    mini=min(mini,arr[i]);
  }
  brr=arr;
  sort(arr.begin(),arr.end());
  f(i,0,x){
    if(arr[i]!=brr[i]){
      ans=min(ans,max(abs(mini-brr[i]),abs(maxi-brr[i])));
      stat=true;
    }
  }
   if(stat){
    cout<<ans<<endl;
   }else{
      cout<<-1<<endl;
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
