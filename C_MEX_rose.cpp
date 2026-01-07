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
   ll x,y,final=0;
   cin>>x>>y;
   vll arr(x);
   f(i,0,x){
      cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   if(x==1){
    if(arr[0]==0){
        cout<<1<<endl;
    }
   }else{
   f(i,0,x-1){
    if(arr[i+1]<y){
        final+=arr[i+1]-arr[i]-1;
    }else if(arr[i+1]==y){
        final+=y-arr[i];
    }else{
        if(arr[i]==y){
            break;
        }else{
        final+=y-arr[i]-1;
        break;
        }
    }
   }
   cout<<final<<endl;
}}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
      ll t;
        cin>>t; 
        while(t--){
    solve();
}
}


