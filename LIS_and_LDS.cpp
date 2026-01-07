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
       
    ll x,q=0;
    cin>>x;
    vll arr(x);
    f(i,0,x){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
       f(i,0,x-1){
        f(j,i+1,x){
            if((arr[i]^arr[j])==abs(arr[i]-arr[j])){
                q++;
            }
        }
       }
       cout<<q<<endl;
}

int main(){
   ll t;
    cin>>t; 
    while(t--){
    solve();
}
}


