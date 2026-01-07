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
  ll multi(ll x){
    ll y=1;
    while(y<=x){
      y*=2;
    }
    return y/2;
  }
  
  

void solve(){
     ll x,ans;
     cin>>x;
     vll arr(x),arr1(x);
     f(i,0,x){
      cin>>arr[i];
     }
     sort(arr.begin(),arr.end());
     arr1[0]=arr[0];
     ll y;
     cin>>y;
     while(y--){
      ll z;
      cin>>z;
      ll first=0,last=x-1,mid;
      if(arr[0]>z){
        cout<<0<<endl;
      }else{
        while(first<=last){
          mid=(first+last)/2;
          if(((mid!=(x-1)) && (arr[mid]<=z) && (arr[mid+1]>z)) || mid == (x-1)){
              ans=mid;
              break;
          }else{
            if(arr[mid]>z){
              last=mid-1;
            }else{
              first=mid+1;
            }
          }
      }
      cout<<ans+1<<endl;
      }
      
     }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
      ll t=1;
      //cin>>t; 
        while(t--){
    solve();
}
}

