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
     ll l=0;
     while(x>0){
        if(x%2==0){
            x/=2;
            if(x==1){
               l++;
               break;
            }
        }else{
            x--;
            l++;
        }
     }
     cout<<l<<endl;
     
}

int main(){
//    ll t;
//     cin>>t; 
//     while(t--){
    solve();
//}
}


