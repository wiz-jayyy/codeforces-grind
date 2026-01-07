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

void solve(){
      ll a,b,x,y,l=0;
      cin>>a>>b>>x>>y;
      if(a>x && b>y){
         l+=2;
      }if((a>x && b==y) || (a==x && b>y) ){
        l+=2;
      }
      if(a>y && b>x){
        l+=2;
      } if((a>y && b==x) || (a==y && b>x)){
        l+=2;
      }
     
     cout<<l<<endl;


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
     ll t;
      cin>>t; 
      while(t--){
    solve();
 }
}


