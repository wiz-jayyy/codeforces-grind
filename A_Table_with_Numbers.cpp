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
    
    ll n,h,l,lm=0,ls=0;
    cin>>n>>h>>l;
    vll arr(n);
    f(i,0,n){
        cin>>arr[i];
    }
    f(i,0,n){
        if(arr[i]<=min(h,l)){
            ls++;
        }else if(arr[i]<=max(h,l)){
            lm++;
        }
    }
    
      if(ls>=lm){
          cout<<(ls+lm)/2<<endl;
      }else{
        cout<<ls<<endl;
      }
    
    

   

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
