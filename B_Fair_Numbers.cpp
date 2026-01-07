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
   ll check(ll x){
        bool stat=true;
        ll n=x;
     while(n>0){
      if(n%10!=0 && x%(n%10)!=0){
            stat=false;
            break;
      }else{
        n/=10;
      }
     }
     if(stat){
      return 1;
     }else{
      return 0;
     }
   }

void solve(){
    ll x,ans;
    cin>>x;
    ll n=((x/2520)+1)*2520;
    f(i,x,n+1){
      if(check(i)){
          ans=i;
          break;
      }
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

