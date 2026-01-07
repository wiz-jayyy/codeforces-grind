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
   ll x,y,maxi=INT_MIN,mini=INT_MAX;
   cin>>x>>y;
   vll arr(x);
   map<ll,ll> m;
   f(i,0,x){
    cin>>arr[i];
    m[arr[i]]++;
    maxi=max(maxi,arr[i]);
    mini=min(mini,arr[i]);
   }
   if(y>=maxi || y<=mini){
    cout<<"Yes"<<endl;
   }else{
     if(m[y]>0){
      cout<<"Yes"<<endl;
     }else{
      cout<<"No"<<endl;
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

