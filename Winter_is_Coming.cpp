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
       
   ll x;
   cin>>x;
   bool stat=false;
   string s;
   cin>>s;
   map<char,ll> m;
   f(i,0,x){
    m[s[i]]++;
   }
   for(auto i:m){
    if(i.second>=3){
         stat=true;
    }
   }
   if(stat){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
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
