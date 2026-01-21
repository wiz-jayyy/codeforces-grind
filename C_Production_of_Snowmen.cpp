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
  if(x>3){
    if((x%2==0 && (x/2)%2==0) || (x%3==0 && (x/3)%2==0) || (x%6==0 && (x/6)%2==0)){
        cout<<0<<endl;
    }else{
        cout<<1<<endl;
    }
  }else if(x==2){
    cout<<2<<endl;
  }else if(x==3){
    cout<<3<<endl;
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
