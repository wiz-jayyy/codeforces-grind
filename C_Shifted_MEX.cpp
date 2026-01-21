#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define ld long double
#define f(i, x, y) for (ll i = x; i < y; i++)
#define cf(i, x, y) for (ll i = x; i <= y; i++)
#define rf(i, x, y) for (ll i = x - 1; i >= y; i--)
#define endl '\n'



void solve(){
        
   ll x,ans=-1;
   cin>>x;
   vll arr(x);
   f(i,0,x){
    cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   ll l=-arr[0];
   f(i,0,x){
    arr[i]+=l;
   }
   bool stat=true;
   ll j=0;
   while(stat){
     stat=false;
     f(i,0,x){
        if(arr[i]==j){
            stat=true;
            break;
        }
     }
     if(!stat){
        ans=j;
     }
     j++;
   }
   if(ans==-1){
    ans=x;
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
