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
      if(y==1 || x==y || x-y==1){
        cout<<-1<<endl;
      }else{
        if(y>x){
            cout<<2<<endl;
        }else{
            cout<<3<<endl;
        }
      }
}

int main(){
      ll t;
     cin>>t; 
     while(t--){
    solve();
}
}


