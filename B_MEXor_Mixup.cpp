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
    ll x,y,l;
    cin>>x>>y;
    if((x-1)%4==0){
        l=x-1;
      }else if((x-1)%4==1){
        l=1;
      }else if((x-1)%4==2){
        l=x;
      }else if((x-1)%4==3){
        l=0;
      }
      if(l==y){
        cout<<x<<endl;
      }else if((l^(y))!=x){
        cout<<x+1<<endl;
      }else{
        cout<<x+2<<endl;
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

