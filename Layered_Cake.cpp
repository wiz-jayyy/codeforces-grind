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
        
   ll x,y,ans=0;
   cin>>x>>y;
   vll arr1(x),arr2(y);
   f(i,0,x){
    cin>>arr1[i];
   }
   f(i,0,y){
    cin>>arr2[i];
   }
   f(i,0,y){
    f(j,0,x){
        if(arr2[i]<arr1[j]){
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
