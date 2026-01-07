#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define ld long double
#define f(i,x,y) for(ll i=x; i<(y); i++)
#define cf(i,x,y) for(ll i=x; i<=(y); i++)
#define rf(i,x,y) for(ll i=x-1; i>=(y); i--)
#define endl '\n'

long long fact(ll x){
   ll f=1;
   for(ll i=x; i>=1; i--){
      f= f*i;
   }
   return f;
}
  
void solve(){
    bool stat=false;
    ll x,ans=0;
    cin>>x;
    if(x%2==0){
        stat=true;
    }
    x=x*2;
    vll arr(x);
    map<ll,ll> m;
    f(i,0,x){
        cin>>arr[i];
        m[arr[i]]++;
    }
    if(stat && m.size()==1){
        cout<<0<<endl;
    }else{
         for(auto i:m){
        if(i.second%2==0){
            ans+=2;
        }else{
            ans++;
        }
    }
      cout<<ans<<endl;
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

