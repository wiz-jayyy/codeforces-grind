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
   ll x,l=0,ans=0;
   cin>>x;
   vll arr(x);
   map<ll,ll> m;
   f(i,0,x){
    cin>>arr[i];
    m[arr[i]]++;
   }
   ans+=m[4];
   ans+=(m[2])/2;
   m[2]=(2*m[2])%4;
   if(m[1]>m[3]){
    ans+=m[3];
    m[1]=m[1]-m[3];
    m[3]=0;
   }else{
    ans+=m[3];
    m[1]=0;
    m[3]=0;
   }
   if((m[1]>0 && m[2]>0) || m[1]>0){
    ans+= ((m[1]+(m[2]))/4);
    if(((m[1]+(m[2]))%4)==0){
             m[2]=0;
    }else{
        ans++;
        m[2]=0;
    }
   }else if(m[2]>0){
    ans++;
    }
    cout<<ans<<endl;
   
  

     
      
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
      ll t=1;
     // cin>>t; 
        while(t--){
    solve();
}
}

