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
        
     ll x,ans=0,maxi=INT_MIN;
     cin>>x;
     vll arr(x),arr1(x);
     f(i,0,x){
        cin>>arr[i];
        maxi=max(maxi,arr[i]);
     }
     arr1=arr;
     sort(arr.rbegin(),arr.rend());
     ll i=0;
     while(x>0){
        if(arr[i]!=arr1[i]){
            if(x==1){
                ans+=arr[i];
                x--;
            }else{
                ans+=2*arr[i];
                x-=2;
            }
        }else{
            ans+=arr[i];
            x--;
        }
        i++;
     }
     
        cout<<ans<<endl;
     


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
