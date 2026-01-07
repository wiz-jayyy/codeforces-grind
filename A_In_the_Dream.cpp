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
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      if(max(a,b)<=2*(min(a,b)+1) && max(c-a,d-b)<=2*(min(c-a,d-b)+1)){
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
}
}


