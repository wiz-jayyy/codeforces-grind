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
     ll l= x%4;
     if(l==1){
        cout<<8<<endl;
     }else if(l==2){
        cout<<4<<endl;
     }else if(l==3){
        cout<<2<<endl;
     }else{
        cout<<6<<endl;
     }


}

int main(){
    // ll t;
    //   cin>>t; 
    //   while(t--){
    solve();
//}
}


