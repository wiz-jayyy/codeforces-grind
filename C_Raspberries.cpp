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



void solve(){
      ll x,y,l=0,ans=0;
      cin>>x>>y;
      vll arr(x);
      f(i,0,x){
        cin>>arr[i];
      }
      f(i,0,x){
        f(j,0,x-1){
           if(arr[j]^arr[j+1]<=y){
            swap(arr[j],arr[j+1]);
             l++;
             ans++;
           }
        }
        if(l==0){
          break;
        }else{
          l=0;
        }
        
      }
      cout<<ans<<endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
     ll t;
      cin>>t; 
      while(t--){
    solve();
 }
}


