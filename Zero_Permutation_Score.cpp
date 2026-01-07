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
  ll bincount(ll x){
      ll ans=0;
    f(i,0,64){
        if((x>>i)&0){
          ans++;
        }
    }
    return ans;
  }
  
void solve(){
     ll x,ans=0;
     cin>>x;
     vll arr(x,0);
     for(ll i=1;i<x-2; i=i+2){
        arr[i]=1;
        f(j,0,x-1){
           if(arr[j]==0 && arr[j+1]==0){
                  ans++;
           }
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

