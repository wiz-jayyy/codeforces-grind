#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define ld long double
#define f(i, x, y) for (ll i = x; i < y; i++)
#define cf(i, x, y) for (ll i = x; i <= y; i++)
#define rf(i, x, y) for (ll i = x - 1; i >= y; i--)
#define endl '\n'



void solve(){
 
     ll x,y,num=0,ans=0;
     cin>>x>>y;
     vll arr(x);
     bool stat=false,vtat=false;
     f(i,0,x){
        cin>>arr[i];
     }
     sort(arr.begin(),arr.end());
     f(i,1,x){
        if(arr[i]!=arr[i-1]){
            ll k=arr[i]-arr[i-1];
          //  y-=num;
            if(y-num>0){
                if((y-num)/i>k){
                ans+=k;
                num+=i*k;
            }else{
                ans+=(y-num)/i;
                stat=true;
                break;
            }
            }else{
                stat=true;
                break;
            }   
        }
     }
     if(!stat){
        y=y-num;
        ans+=y/x;
     }
     cout<<ans+arr[0]<<endl;
   
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1;
  cin >> t;
  while (t--){
    solve();
  }
}
