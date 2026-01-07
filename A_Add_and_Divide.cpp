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
   ll x,y,opr=0,mini=INT_MAX;
   cin>>x>>y;
   f(i,0,32){
      opr=i;
      ll did=i+y;
      if(y==1){
        did++;
        opr++;
      }
      
      ll xcpy=x;
      while(xcpy>0){
        xcpy/=did;
        opr++;
      }
      mini=min(opr,mini);
   }
   cout<<mini<<endl;
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

