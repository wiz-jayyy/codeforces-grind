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
     ll x,y,final=0;
     cin>>x>>y;
     string s;
     cin>>s;
     f(i,0,x){
        if(s[i]=='1'){
            int one = 0;
            for(int j = i-1;j>=max(i-y+1,0ll);j--){
                if(s[j]=='1'){
                    one++;
                    break;
                }
            }
            if(one==0){
                final++;
            }
        }
     }
     cout<<final<<endl;
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


