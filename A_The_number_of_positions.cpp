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
      ll x,y,z;
      cin>>x>>y>>z;
       if(x<y){
        cout<<0<<endl;
       }else{
        if((x-y)<=z){
            cout<<x-y<<endl;
        }else{
            cout<<z+1<<endl;
        }
       }
     
}

int main(){
    //  ll t;
    // cin>>t; 
    // while(t--){
    solve();
//}
}


