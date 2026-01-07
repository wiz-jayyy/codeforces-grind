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
      ll l=0;
      vll arr(x);
      f(i,0,x){
        cin>>arr[i];
      }
      map<ll,ll> m;
      f(i,0,x){
           m[arr[i]]++;
      }
      for(const auto& pair : m){
       if(pair.second%pair.first==0){
        l+=pair.second;
       }else{
        l+=(pair.second/pair.first) * pair.first;
       }
      }
      cout<<l<<endl;
       
}

int main(){
   ll t;
    cin>>t; 
    while(t--){
    solve();
}
}


