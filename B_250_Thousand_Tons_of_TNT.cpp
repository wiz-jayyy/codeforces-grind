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
 
    ll x,maxi=INT_MIN,mini=90000000000000000,ans=INT_MIN;
    cin>>x;
    vll arr(x+1);
    f(i,1,x+1){
        cin>>arr[i];
    }
    vll prefsum(x+1);
    prefsum[1]=arr[1];
    f(i,2,x+1){
        prefsum[i]=arr[i]+prefsum[i-1];
    }
    prefsum[0]=0;
    // f(i,0,x+1){
    //     cout<<prefsum[i]<<" ";
    // }
   // cout<<endl;
    f(i,1,x+1){
        ll k=0;
        if(x%i==0){

           while(k<=x){
            k+=i;
            if(k>x){
                break;
            }
            maxi=max(prefsum[k]-prefsum[k-i],maxi);
            mini=min(prefsum[k]-prefsum[k-i],mini);
           // cout<<maxi<<" "<<mini<<endl;
        }
        }
      //  cout<<endl;
        ans=max(ans,maxi-mini);
        maxi=INT_MIN;
        mini=90000000000000000;
    }
    cout<<ans<<endl;
   
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
