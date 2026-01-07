#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define ld long double
#define f(i,x,y) for(ll i=x; i<y; i++)
#define cf(i,x,y) for(ll i=x; i<=y; i++)
#define rf(i,x,y) for(ll i=x-1; i>=y; i--)
#define endl '\n'

long long fact(ll x){
   ll f=1;
   for(ll i=x; i>=1; i--){
      f= f*i;
   }
   return f;
}

void solve(){
  ll x,y,z,extra,how;
  cin>>x>>y>>z;
  string s="";
   how=y/(z+1);
   extra=y%(z+1);
   f(i,0,x){
    if(y>0){
         f(i,0,how){
        s.push_back('R');
        y--;
       }
       if(extra>0){
        s.push_back('R');
        extra--;
        y--;
       }
    }   
      
       if(z>0){
        s.push_back('B');
        z--;
       }
   }
   cout<<s<<endl;
    
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

