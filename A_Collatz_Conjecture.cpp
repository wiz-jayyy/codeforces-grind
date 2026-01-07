#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define f(i,x,y) for(ll i=x; i<y; i++)
#define cf(i,x,y) for(ll i=x; i<=y; i++)
#define rf(i,x,y) for(ll i=x-1; i>=y; i--)
#define endl '\n'

void solve(){
  ll x;
  cin>>x;
  vll arr(x);
  f(i,0,x){
    cin>>arr[i];
    arr[i]= arr[i]*3;
  }
  f(i,0,x){
    cout<<arr[i]<<" ";
  }

}

int main(){
   ll t;
    cin>>t; 
    while(t--){
    solve();
}
}


