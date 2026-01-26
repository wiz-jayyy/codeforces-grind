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
    
    ll x,y,maxi=INT_MIN,p,q,r,ans;
    cin>>x>>y;
    while(x--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(maxi<a*b-c){
          maxi=a*b-c;
        }
        if(a*(b-1)>0){
            y-=a*(b-1);
        }
    }
       if(y<=0){
        cout<<0<<endl;
       }else if(maxi<=0)
       {
        cout<<-1<<endl;
       }else{
            if(y%maxi==0){
        cout<<y/maxi<<endl;
      }else{
        cout<<(y/maxi)+1<<endl;
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
