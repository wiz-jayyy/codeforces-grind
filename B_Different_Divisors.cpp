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
   ll nextprime(ll x){
      bool stat=true;
      for(ll i=x;;i++){
        for(ll j=2;j*j<=i;j++){
            if(i%j==0){
                stat=false;
                break;
            }
        }
        if(stat){
            return i;
        }
      }
   }

void solve(){
       ll x;
       cin>>x;
       ll p=nextprime(x+1);
       ll q=nextprime(p+x);
       cout<<min(1LL*p*p*p,1LL*p*q)<<endl;

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

