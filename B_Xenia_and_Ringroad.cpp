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

long long prime(ll x){
   ll l=0;
    f(i,2,x){
        if(x%i==0){
           l++;
           break;
        }
    }
    if(l>0){
        return 1;
    }else{
        return 0;
    }
}

long long pow(ll x, ll y){
   ll final=1;
    for(ll i=1; i<=y; i++){
        final*=x;
    }
    return final;
}


void solve(){
    ll x,y,current=1,ans=0;
    cin>>x>>y;
    vll arr(y);
    f(i,0,y){
        cin>>arr[i];
    }
    f(i,0,y){
        if(arr[i]>=current){
            ans+=arr[i]-current;
            current=arr[i];
           
        }
        else{
             ans+=x-current+arr[i];
            //  cout<<ans<<endl;
             current=arr[i];
        }
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


