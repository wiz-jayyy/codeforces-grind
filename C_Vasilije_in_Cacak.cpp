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
   for(int i=0; i<t; i++){
    ll x, y, z;
    cin>>x>>y>>z;
    if((((x*(x+1))/2) - (((x-y)*(x-y+1))/2) >= z) && (y*(y+1))/2 <= z){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

   }
    
}


