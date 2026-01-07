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
    ll n,k;
    cin>>n>>k;
    if(k==1){
        cout<<1<<endl;
    }else{
    if(k<n){
       if(n%k==0){
         cout<<n/k<<endl;
       }else{
        cout<<(n/k) + 1<<endl;
       }
    }else{
        if(k%n==0){
            cout<<k/n<<endl;
        }else{
            cout<<(k/n) + 1<<endl;
        }
    }
}
            
     
}

int main(){
     ll t;
    cin>>t; 
    while(t--){
    solve();
}
}


