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
    f(i,0,t){
        ll x,y,z;
        cin>>x>>y>>z;
        ll l=y;
        vll arr(z);
        f(j,0,z){
            cin>>arr[j];
            if(arr[j]<= x-1){
                l += arr[j];
            }else{
                l += x-1;
            }
        }
        cout<<l<<endl;
    }
}
