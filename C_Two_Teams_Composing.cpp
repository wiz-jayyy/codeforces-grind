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
  ll bincount(ll x){
      ll ans=0;
    f(i,0,64){
        if((x>>i)&0){
          ans++;
        }
    }
    return ans;
  }
  
void solve(){
     ll x,diff=0,maxi=INT_MIN;
     cin>>x;
     vll arr(x);
     map<ll,ll> m;
     f(i,0,x){
      cin>>arr[i];
      m[arr[i]]++;
     }
     for(auto i:m){
          diff++;
          i.second--;
          maxi=max(i.second,maxi);
     }
     if(diff>2 && maxi==0){
        cout<<1<<endl;
     }else{
        if(maxi>=diff){
        cout<<diff<<endl;
     }else{
        cout<<maxi<<endl;
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

