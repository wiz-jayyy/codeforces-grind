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
      ll x,y;
      cin>>x>>y;
      y= y*2;
      vll arr(x);
      f(i,0,x){
        cin>>arr[i];
      }
      f(i,0,x){
        arr[i] = arr[i]*y;
        cout<<arr[i]<<" ";
      }
      cout<<endl;

       
}

int main(){
    ll t;
    cin>>t; 
    while(t--){
    solve();
}
}


