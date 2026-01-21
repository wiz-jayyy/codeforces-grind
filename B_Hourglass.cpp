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
    if(x<y){
        cout<<max(x-(z%y),0ll)<<endl;
    }else{
        if((z/y)%2==0){
            cout<< x-(z%y)<<endl;
        }else{
            cout<<y-(z%y)<<endl;
        }
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
