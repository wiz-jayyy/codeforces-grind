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
    ll x,maxi=INT_MIN,label=1,ans;
    cin>>x;
    while(x--){
      ll a,b;
      cin>>a>>b;
       if((a/b)>maxi){
        maxi=a/b;
        ans=label;
       }
       label++;
    }
    cout<<ans<<endl;
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

