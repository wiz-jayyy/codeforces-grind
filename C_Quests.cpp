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
 
   ll x,y,ans,maxi=INT_MIN;
   cin>>x>>y;
   vll arr(x),brr(x),maxiarr(x),sumarr(x);
   f(i,0,x){
    cin>>arr[i];
   }
   f(i,0,x){
    cin>>brr[i];
   }
   maxiarr[0]=brr[0];
   sumarr[0]=arr[0];
   f(i,1,x){
      maxiarr[i]=max(brr[i],maxiarr[i-1]);
      sumarr[i]=arr[i]+sumarr[i-1];
   }
   ans=arr[0];
   y--;
   y=max(0ll,y);
   ans+=y*brr[0];
   maxi=ans;
   f(i,1,x){
    ans=sumarr[i];
    y--;
    if(y<0){
        break;
    }
    y=max(0ll,y);
    ans+=y*maxiarr[i];
    maxi=max(ans,maxi);

   }
     cout<<maxi<<endl;

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
