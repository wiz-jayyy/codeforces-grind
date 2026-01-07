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
    ll x,y;
    cin>>x>>y;
    vll arr1(x),arr2(x);
    map<ll,ll> m;
    f(i,0,x){
      cin>>arr1[i];
    }
    ll l=0;
    for(ll i=x-1;i>=0;i--){
      m[arr1[i]]++;
       arr2[i]=m.size();
    }
    while(y--){
      ll k;
      cin>>k;
      cout<<arr2[k-1]<<endl;
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
      ll t=1;
      //cin>>t; 
        while(t--){
    solve();
}
}

