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
     vll arr(x);
     bool stat=true;
     f(i,0,x){
        cin>>arr[i];
     }
     vector<pair<ll,ll>> m(x);
    f(i,0,x){
        m[i].first=arr[i];
        if(i%2==0){
            m[i].second=1;
        }else{
            m[i].second=0;
        }
    }
    sort(m.begin(),m.end());
    f(i,0,x-1){
        if(m[i].second==m[i+1].second){
               stat=false;
        }
    }
         if(stat){
            cout<<"YES"<<endl;
         }else{
            cout<<"NO"<<endl;
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
