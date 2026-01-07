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
   ll t,mini=INT_MAX,ans=0,smini=INT_MAX;
   cin>>t;
   while(t--){
      ll x;
      cin>>x;
      vll arr(x);
      f(i,0,x){
         cin>>arr[i];
      }
      sort(arr.begin(),arr.end());
      mini=min(mini,arr[0]);
      smini=min(smini,arr[1]);
      ans+=arr[1];
   }
     cout<<ans+mini-smini<<endl;

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

