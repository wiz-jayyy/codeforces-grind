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
   ll x,y;
   cin>>x>>y;
   vll arr(x);
   f(i,0,x){
      cin>>arr[i];
   }
   vector<pair<ll,ll>> m;
   f(i,0,x){
     if(arr[i]%y!=0){
      m.push_back({(arr[i]%y),-i});
   }else{
      m.push_back({(y),-i});
   }
}
   sort(m.rbegin(),m.rend());
     for(auto iterate : m){
      cout<<-(iterate.second) + 1 <<" ";
     }
     cout<<endl;
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

