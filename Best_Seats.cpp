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
       
     ll x,l,q=0;
     cin>>x;
     vll arr(x);
     f(i,0,x){
        cin>>arr[i];
     }
     l=x;
       f(i,0,x){
        if(arr[i]>1){
            q++;
        }
       }
       cout<<min(l,q)<<endl;
}

int main(){
   ll t;
    cin>>t; 
    while(t--){
    solve();
}
}


