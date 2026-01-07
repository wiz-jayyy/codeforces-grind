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
    ll x, l=0;
    cin>>x;
    vll arr(x);
    f(i,0,x){
        cin>>arr[i];
    }
    map<ll , ll> m;
    f(i,0,x){
          m[arr[i]]++;
    }
    for(const auto& i: m){
        if(i.second >= 2){
              l++;
              break;
        }
    }
    if(l>0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

       
     
}

int main(){
    ll t;
    cin>>t; 
    while(t--){
        solve();
}}


