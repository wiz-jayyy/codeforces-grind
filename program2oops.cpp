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
    
   const ll x=7;
   cout<<"ENTER A NUMBER:"<<endl;
   ll y;
   cin>>y;
   if(y<x){
    cout<<"TOO SMALL"<<endl;
   }else if(y>x){
    cout<<"TOO LARGE"<<endl;
   }else{
    cout<<"CORRECT"<<endl;
   }

}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1;
 // cin >> t;
  while (t--){
    solve();
  }
}
