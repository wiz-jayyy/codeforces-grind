#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define f(i,x,y) for(ll i=x; i<y; i++)
#define cf(i,x,y) for(ll i=x; i<=y; i++)
#define rf(i,x,y) for(ll i=x-1; i>=y; i--)
#define endl '\n'

void solve(){
     ll x,y,z;
      cin>>x>>y>>z;
      cout<<max({(x+y)*z,x*(y+z),x*y*z})<<endl;
    
}

int main(){
//    ll t;
//     cin>>t; 
//     while(t--){
    solve();
//}
}


