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
     ll x,y;
     cin>>x>>y;
     if(x==y){
        cout<<0<<endl;
     }else if(x%y==0 || y%x==0){
        cout<<1<<endl;
     }  else {
        cout<<2<<endl;
     }
  
}
 
int main(){
   ll t;
    cin>>t; 
    while(t--){
    solve();
}
}
 