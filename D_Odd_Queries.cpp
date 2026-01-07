#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define f(i,x,y) for(ll i=x; i<y; i++)
#define cf(i,x,y) for(ll i=x; i<=y; i++)
#define rf(i,x,y) for(ll i=x-1; i>=y; i--)
#define endl '\n'

void solve(){
       ll x,y;
       cin>>x>>y;
       vll arr(x);
       f(i,0,x){
        cin>>arr[i];
       }
       vll prefsum(x);
       prefsum[0]=arr[0];
       f(i,1,x){
           prefsum[i]= arr[i] + prefsum[i-1];
       }
       f(i,0,y){
        ll a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        ll sum = prefsum[b] ;
        if(a-1>=0){
            sum = sum - prefsum[a-1];
        }
        ll change = (b-a+1)*c;

        ll final = prefsum[x-1] - sum + change;

        if(final%2==0){
         cout<<"NO"<<endl;
        }else{
         cout<<"YES"<<endl;
        }
}}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}


