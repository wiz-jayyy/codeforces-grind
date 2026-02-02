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
 
   ll x,y;
   cin>>x>>y;
   vll arr(x),brr(y);
   f(i,0,x){
    cin>>arr[i];
   }
   f(i,0,y){
    cin>>brr[i];
   }
   ll power=31;
   f(i,0,y){
      if(brr[i]>=power){
        continue;
      }else{
        ll k=pow(2,brr[i]);
        f(i,0,x){
            if(arr[i]%k==0){
                arr[i]+=k/2;
            }
        }
        power=brr[i];
      }
   }
   f(i,0,x){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1;
  cin >> t;
  while (t--){
    solve();
  }
}
