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
    ll l=0,m=0;
    vll arr(x);
    f(i,0,x){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    f(i,0,x){       
       if(i%2!=0){
           l+=arr[i];
       }else{
        if(i>0){
            m+=arr[i];
       }    }
        }
        if(x%2==0){
            cout<<l<<endl;
        }else{
            cout<<min(l+arr[x-1],m+arr[1])<<endl;
        }
    }

       
       


int main(){
    ll t;
    cin>>t; 
    while(t--){
        solve();
}}


