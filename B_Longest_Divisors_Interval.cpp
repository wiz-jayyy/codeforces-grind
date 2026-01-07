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
        ll x;
        ll l=0;
        cin>>x;
        if(x%2 !=0){
            cout<<1<<endl;
        }else{
            cf(j,1,x){
                if(x%j==0){
                  l++;
                }else{
                    break;
                }
            }
            cout<<l<<endl;
        }
    }
}


