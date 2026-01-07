#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define f(i,x,y) for(ll i=x; i<y; i++)
#define cf(i,x,y) for(ll i=x; i<=y; i++)
#define rf(i,x,y) for(ll i=x-1; i>=y; i--)
#define endl '\n'


int main(){
    ll t;
    cin>>t;
    f(i,0,t){
        ll x,y,z;
        cin>>x>>y>>z;

        // 2y = x + z

        if((2*y - z)%x==0 && (2*y - z)>0){
            cout<<"YES"<<endl;
        }else if((2*y-x)%z==0 && (2*y-x)>0){
            cout<<"YES"<<endl;
        }else if((x+z)%(2*y)==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}


