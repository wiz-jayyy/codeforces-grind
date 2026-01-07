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
       ll k=0;
       cin>>x;
       vll arr(x);
       f(i,0,x){
        cin>>arr[i];
       }
       ll m[100] = {0};
       f(i,0,x){
        m[arr[i]]++;
       }
       f(i,0,100){
        if(m[i]>=2){
             k++;
             break;
        }
       }
       if(k>0){
        cout<<"YES"<<endl;
       }else{
        cout<<"NO"<<endl;
       }
       
       
}

int main(){
    ll t;
    cin>>t; 
    solve();
}


