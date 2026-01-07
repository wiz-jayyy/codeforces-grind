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
     ll x,y,c,n=0;
     cin>>x>>y;
     c=x*y;
     if(x%y==0 || y%x==0){
        cout<<"NO"<<endl;
     }else{
        ll i=1;
        while(c>0){
           ll j=1;
            while(x*j<c*i && y*j<c*i){
                 if( (((c*i) - (x*j))%x==0 ) && (c*i) - (x*j) != x*j){
                         n++;
                         cout<<"YES"<<endl;
                         cout<<x*j<<" "<<(c*i) - (x*j)<<" "<<c*i<<endl;
                         break;
                 }else if((((c*i) - (y*j))%x==0 ) && (c*i) - (y*j) != y*j){
                         n++;
                         cout<<"YES"<<endl;
                         cout<<y*j<<" "<<(c*i) - (y*j)<<" "<<c*i<<endl;
                         break;
                 }
                 j++;
            }
            i++;
               if(n>0){
                break;
               }
        }
     }
 
}
 
int main(){
      ll t;
     cin>>t; 
     while(t--){
    solve();
}
}