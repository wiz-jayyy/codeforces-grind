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
   
   ll x,y,white=0,mini=INT_MAX;
   cin>>x>>y;
   string s;
   cin>>s;
   f(i,0,y){
      if(s[i]=='W'){
           white++;
      }
   }
   mini=min(mini,white);
   f(i,y-1,x-1){
      if(s[i]!=s[i-y+1]){
         if(s[i-y+1]=='W' && s[i+1]=='B'){
            white--;
            mini=min(mini,white);
         }else{
             white++;
             mini=min(mini,white);
         }
      }
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

