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
     ll x, y;
    cin>>x>>y;
    ll l=x,n=0;
      while(x>0){
        l+=x/y;
        n+=x%y;
        if(n/y>0){
            l+=n/y;
            n=n%y;
        }
        x=x/y;
      }
      cout<<l<<endl;

}

int main(){
    // ll t;
    //  cin>>t; 
    //  while(t--){
    solve();
//}
}


