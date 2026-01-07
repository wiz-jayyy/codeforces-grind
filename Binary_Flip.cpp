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
     ll x,zero=0,one=0;
     cin>>x;
     string s;
     cin>>s;
     f(i,0,x-1){
        if(s[i]==s[i+1]){
            if(s[i]=='0'){
                zero++;
            }else{
                one++;
            }
        }
     }
     
     if(one>=zero){
      cout<<0<<endl;
     }else{
      cout<<(zero-one+1)/2<<endl;
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

