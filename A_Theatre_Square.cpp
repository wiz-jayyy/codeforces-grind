#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define vll vector<ll>
#define f(i,x,y) for(ll i=x; i<y; i++)
#define cf(i,x,y) for(ll i=x; i<=y; i++)
#define rf(i,x,y) for(ll i=x-1; i>=y; i--)
#define endl '\n'
 
//void solve(){
     
//}
 
int main(){
   ll x,y,z;
   cin>>x>>y>>z;
   if(x%z==0 && y%z==0){
    cout<<(x/z) * (y/z)<<endl;
   }else if(x%z!=0 && y%z==0){
    cout<< ((x/z) + 1) * (y/z)<<endl;
   }else if(x%z==0 && y%z!=0){
     cout<< (x/z) * (1 + (y/z))<<endl;
   }else{
    cout<<((x/z) +1) * ((y/z) + 1)<<endl;
   }
}
 