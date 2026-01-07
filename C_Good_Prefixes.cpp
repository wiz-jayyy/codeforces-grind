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
    ll x,ans=0,q=0,maxi=0;
    cin>>x;
    vll arr1(x), arr2(x);
    f(i,0,x){
      cin>>arr1[i];
    }
    arr2[0]=arr1[0];
    f(i,1,x){
      arr2[i]= arr2[i-1] + arr1[i];
    }
     f(i,0,x){
        maxi=max(arr1[i],maxi);
        if(arr2[i]-maxi==maxi){
            ans++;
        }
     }
     cout<<ans<<endl;
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


