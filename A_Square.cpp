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
  ll twopower(ll x){
      while(x>=1){
         if(x%2==0){
            x/=2;
         }else{
            if(x==1){
               return 1;
            }else{
               return 0;
            }
         }
      }
  }

void solve(){
      
     ll x,y,z,a;
     cin>>x>>y>>z>>a;
     if(x==y && y==z && z==a){
      cout<<"YES"<<endl;
     }else{
      cout<<"NO"<<endl;
     }
     


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
      ll t;
       cin>>t; 
        while(t--){
    solve();
}
}

