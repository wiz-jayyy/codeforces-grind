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
     ll x;
     cin>>x;
     vll arr(x);
     ll l=0, m=0;
    f(i,0,x){
        cin>>arr[i];
        if(arr[i]==1){
            l++;
        }
        if(arr[i]==0){
            m++;
        }
    }
    if(l>0 && m>0){
        cout<<accumulate(arr.begin(),arr.end(),0) + 1 <<endl;
    }else{
        cout<<accumulate(arr.begin(),arr.end(),0)<<endl;
    }
}

int main(){
   ll t;
    cin>>t; 
    while(t--){
    solve();
}
}


