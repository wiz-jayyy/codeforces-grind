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
     ll n,m,x,y;
     cin>>n>>m>>x>>y;
     ll l=0;
     vll arrn(n);
     f(i,0,n){
        cin>>arrn[i];
     }
     vll arrm(m);
     f(i,0,m){
        cin>>arrm[i];
     }
     f(i,0,n){
        if(arrn[i]<=y){
           l++;
        }
     }
     f(i,0,m){
        if(arrm[i]<=x){
            l++;
        }
     }
     cout<<l<<endl;

}

int main(){
    ll t;
      cin>>t; 
      while(t--){
    solve();
}
}


