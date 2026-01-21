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
        
   ll x,maxi,freq=-1;
   cin>>x;
   vll arr(x);
   f(i,0,x){
    cin>>arr[i];
   }
   map<ll,ll> m;
   f(i,0,x){
    m[arr[i]]++;
   }
   for(auto i:m){
        if(i.second>freq){
            freq=i.second;
            maxi=i.first;
        }else if(i.second=freq){
            maxi=min(maxi,i.first);
        }
   }
   cout<<maxi<<endl;

        
   
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
