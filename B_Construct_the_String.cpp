#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define f(i,x,y) for(ll i=x; i<y; i++)
#define cf(i,x,y) for(ll i=x, i<=y; i++)
#define rf(i,x,y) for(ll i=x-1; i>=y; i--)
#define endl '\n'


int main(){
ll t;
cin>>t;
f(i, 0, t){
    string s = "abcdefghijklmnopqrstuvwxyz";
    ll x, y, z;
    cin>>x>>y>>z;
    vector<char> arr(x);
    
        ll k=0;
        for(ll j=0; j<x; j++){
           if(k>z){
            k=0;
           }
            arr[x]=s[k];
            k++; 
                   
         }
    f(l,0,x){
        cout<<arr[l];
    }
}


    
}


