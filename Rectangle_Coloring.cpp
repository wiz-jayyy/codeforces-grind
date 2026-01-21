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
   ll l,w,r,g,b,mini,maxi,mid,ans=0;
   cin>>l>>w>>r>>g>>b;
    mini=min({r,g,b});
    maxi=max({r,g,b});
    mid=(r+g+b)-(mini+maxi);
   
    if(((l+b)==maxi && mid==l && mini==b) || (maxi==l+l && mini==w)){
      cout<<4<<endl;
    }else if((maxi>l+l+w || maxi>l+w+w) || (maxi>l+w && maxi<l+l+w && maxi!=l+w+w && mini!=w)){
      cout<<6<<endl;
    }else{
      cout<<5<<endl;
    }
   

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
