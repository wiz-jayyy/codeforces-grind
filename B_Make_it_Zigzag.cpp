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
    ll x,maxi=0,ans=0;
    cin>>x;
    vll arr(x);
   f(i,0,x){
      cin>>arr[i];
   }
   f(i,0,x){
      maxi=max(maxi,arr[i]);
      if(i%2!=0){
         arr[i]=maxi;
      }
   }
   for(ll i=1;i<x; i+=2){
      if(arr[i-1]>=arr[i]){
         ans+= (arr[i-1] - (arr[i]-1)); 
         arr[i-1] = arr[i]-1;
      }

      if(i+1<x && arr[i+1]>=arr[i]){
         ans+= (arr[i+1] - (arr[i]-1)); 
         arr[i+1] = arr[i]-1;
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


