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
   ll x,maxi=INT_MIN,ans;
    cin>>x;
    ll i=1;
    while(i<=x*x){
       ans=i;
       if((i+1)%x!=1){
        ans+=i+1;
       }
       if((i-1)%x!=0){
        ans+=i-1;
       }
       if(i-x>0){
        ans+=i-x;
       }
       if(i+x<x*x){
        ans+=i+x;
       }
       maxi=max(maxi,ans);
       ans=0;
       i++;
    }
    if(x==1){
        cout<<1<<endl;
    }else{
       cout<<maxi<<endl;
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

