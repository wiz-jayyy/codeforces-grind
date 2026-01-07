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
     ll x;
     cin>>x;
     vll arr(x);
     f(i,0,x){
      cin>>arr[i];
     }
     if(arr[0]==-1 && arr[x-1]==-1){
      arr[0]=0;
      arr[x-1]=0;
     }else if(arr[0]==-1 && arr[x-1]!=-1){
      arr[0]=arr[x-1];
     }else if(arr[x-1]==-1 && arr[0]!=-1){
      arr[x-1]=arr[0];
     }
     f(i,1,x-1){
      if(arr[i]==-1){
        arr[i]=0;
      }
     }
     cout<<abs(arr[x-1]-arr[0])<<endl;
     f(i,0,x){
      cout<<arr[i]<<" ";
     }
     cout<<endl;
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

