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
    ll maxi=0;
    string a,b;
    cin>>a>>b;
    ll n=a.length(),m=b.length();
    cf(i,1,min(n,m)){
        for(ll j=0; j+i<=n;j++){
          for(ll k=0; k+i<=m;k++){
                 string lena= a.substr(j,i);
                 string lenb= b.substr(k,i);
                 if(lena==lenb){
                      maxi=max(maxi,i);
                 }
          }
        }
    }
    cout<<(n+m)-(2*maxi)<<endl;

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

