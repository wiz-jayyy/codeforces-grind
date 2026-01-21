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
        
     ll x,num1=0,num0=0;
     cin>>x;
     vll arr(x);
     f(i,0,x){
        cin>>arr[i];
     }
     f(i,0,x){
        if(arr[i]==0){
            num0++;
        }else if(arr[i]==1){
            num1++;
        }
     }
     if(num0==0){
        cout<<"NO"<<endl;
     }else if(num0>=2 && num1==0){
        cout<<"NO"<<endl;
     }else{
        cout<<"YES"<<endl;
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
