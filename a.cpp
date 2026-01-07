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

void solve(){
   ll x, ans=0;
   cin>>x;
   bool stat=false;
   string s;
   cin>>s;
   ll l=0;
   f(i,l,x-3){
      if(s[i]=='2'){
         ans++;
         l=i;
         break;
      }
   } 
   f(i,l,x-2){
      if(s[i]=='0'){
         ans++;
         l=i;
         break;
      }
   }
   f(i,l,x-1){
      if(s[i]=='2'){
         ans++;
         l=i;
         break;
      }
   }
   f(i,l,x){
      if(s[i]=='6'){
         ans++;
         break;
      }
   }
   f(i,l,x){
      if(s[i]=='5'){
        if(ans==4){
         ans--;
        } 
        break;
      }
   }
   cout<<4-ans<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
}
