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
    ll x,y,z,ans=0;
    cin>>x>>y>>z;
    y=abs(y);
    z=abs(z);
    string s;
    cin>>s;
    map<char,ll> m;
    f(i,0,x){
      m[s[i]]++;
    }
    y-=m['8'];
    z-=m['8'];
    m['8']-=max(y,z);
    if(y<=0 && z<=0){
      cout<<"YES"<<endl;
    }else{
       if(y>0 && z>0){
          ans=(y+z)-m['4'];
          if(ans<=0){
            cout<<"YES"<<endl;
          }else{
            cout<<"NO"<<endl;
          }
       }else{
        ans=max(y,z)-m['4'];
        if(ans<=0){
          cout<<"YES"<<endl;
        }else{
          cout<<"NO"<<endl;
        }
       }
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

