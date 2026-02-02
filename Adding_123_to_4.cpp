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
    
   ll x,y,z,ans=0;
   cin>>x>>y>>z;
   if(x>z){
    ans+=z;
    x-=4*z;
    x=max(0ll,x);
   }else{
    ans+=x;
    x=0;
   }
   y=y*2;
   if((y)%4==0){
    ans+=y/4;
    y=0;
   }else{
    ans+=y/4;
    y=y%4;
   }
   if(x>=2 && y>=2){
    ans++;
    x-=2;
   }
   if(x>=4){
    ans+=x/4;
   }
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
