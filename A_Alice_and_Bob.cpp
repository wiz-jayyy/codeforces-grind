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
     ll x,y,ans=0;
     cin>>x>>y;
     vll arr(x);
     f(i,0,x){
      cin>>arr[i];
     }
     ll l;
     if(x%2!=0){
        l=arr[x/2];
        if(y>l){
            cout<<y-1<<endl;
        }else if(y<l){
            cout<<y+1<<endl;
        }else{
            cout<<y+1<<endl;
        }
     }else{
        l=(arr[x/2] + arr[(x/2)-1])/2;
        if(y>l){
            cout<<y-1<<endl;
        }else if(y<l){
            cout<<y+1<<endl;
        }else{
            cout<<y+1<<endl;
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

