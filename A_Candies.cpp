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
        ll x;
        cin>>x;
        int l=2;
        while(l>0){
            if(x%(2*l - 1)==0){
                cout<<x/(2*l - 1)<<endl;
                break;
            }else{              
                l = l*2;
            }
        }
    }
}


