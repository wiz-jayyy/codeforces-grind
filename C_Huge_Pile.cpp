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
       
     ll x,y,ans=0;
     cin>>x>>y;
     bool stat=false;
     ll a=x,b=x;
     while(a>=1 && b>=1){
          if(a==y || b==y){
            stat=true;
            break;
          }else{
            if(x%2==0){
                x/=2;
                a=x,b=x;
               // cout<<a<<" "<<b<<endl;
            }else{
                x/=2;
                a=x;
                b=x+1;
              if(y%2==0 || y==1){
                x=a;
              }else{
                x=b;
              }
               // cout<<a<<" "<<b<<endl;
            }
                ans++;
               // cout<<ans<<endl;
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
  ll t=1;
  cin>>t;
  while(t--){
    solve();
  }
}
