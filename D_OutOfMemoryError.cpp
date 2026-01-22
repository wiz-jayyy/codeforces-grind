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
        
    ll n,m,h;
    cin>>n>>m>>h;
    vll arr(n);
    f(i,0,n){
        cin>>arr[i];
    }
    vector<pair<ll,ll>> vec(m);
    f(i,0,m){
        cin>>vec[i].first>>vec[i].second;
    }
    vll brr=arr;
    f(i,0,m){
       if( arr[vec[i].first-1]+vec[i].second<=h){
          arr[vec[i].first-1]+=vec[i].second;
       }else{
           arr=brr;
       }     
    }
        f(i,0,n){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
   
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
