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
   ll x,y;
   cin>>x>>y;
   bool stat;
   if(min(x,y)%2==0){
      stat=false;
   }else{
    stat=true;
   }
   x=x-min(x,y);
   y=y-min(x,y);
   if(x>0){
    if(x%2!=0){
        if(stat){
            stat=false;
        }else{
            stat=true;
        }
    }
   }
   if(stat){
    cout<<"Alice"<<endl;
   }else{
    cout<<"Bob"<<endl;
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
