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
    string s;
    cin>>s;
    ll less=0,gret=0,aes=0;
    f(i,0,s.length()){
        if(s[i]=='<'){
            less++;
        }else if(s[i]=='>'){
            gret++;
        }else{
            aes++;
        }
    }
    string test= string(less,'<') + string(aes,'*') + string(gret,'>');
    if(aes>1 || test!=s){
        cout<<-1<<endl;
    }else{
        cout<<max(less+aes,gret+aes)<<endl;
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

