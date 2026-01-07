#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define ld long double
#define f(i,x,y) for(ll i=x; i<y; i++)
#define cf(i,x,y) for(ll i=x; i<=y; i++)
#define rf(i,x,y) for(ll i=x-1; i>=y; i--)
#define endl '\n'

long long fact(ll x){
   ll f=1;
   for(ll i=x; i>=1; i--){
      f= f*i;
   }
   return f;
}

void solve(){
    ll x,add=0;
    cin>>x;
     vll arr(x),ans(x);
     vector<pair<ll,ll>> vec;
     f(i,0,x){
      cin>>arr[i];
      vec.push_back({arr[i],i});
     }
     sort(vec.rbegin(),vec.rend());
     ll l=1;
     for(ll i=0; i<x; i=i+2){
           ans[vec[i].second]=l;
           l++;
     }
     l=-1;
     for(ll i=1; i<x; i=i+2){
           ans[vec[i].second]=l;
           l--;
     }
     f(i,0,x){
        add+=2*(abs(ans[i]))*arr[i];
     }
     cout<<add<<endl;
     cout<<0<<" ";
     f(i,0,x){
      cout<<ans[i]<<" ";
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

