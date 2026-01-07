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
     ll x,less=0,gret=0;
     cin>>x;
     bool stat=false;
     string s;
     cin>>s;
     f(i,0,x-1){
         if(s[i]<=s[i+1]){
          less++;
         }else if(s[i]>=s[i+1]){
          gret++;
         }
     }
     if(less>=gret){
      f(i,0,x-1){
        if(i!=0 && s[i]>s[i+1]){
          stat=true;
          cout<<"YES"<<endl;
          cout<<i<<" "<<i+2<<endl;
          break;
        }
      }
      if(!stat){
        cout<<"NO"<<endl;
      }
     }else{
       f(i,0,x-1){
        if(i!=0 && s[i]<s[i+1]){
          stat=true;
          cout<<"YES"<<endl;
          cout<<i<<" "<<i+2<<endl;
          break;
        }
      }
      if(!stat){
        cout<<"NO"<<endl;
      }
     }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
      ll t=1;
      //cin>>t; 
        while(t--){
    solve();
}
}

