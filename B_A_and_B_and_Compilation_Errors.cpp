#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define ld long double
#define f(i,x,y) for(ll i=x; i<y; i++)
#define cf(i,x,y) for(ll i=x; i<=y; i++)
#define rf(i,x,y) for(ll i=x-1; i>=y; i--)
#define endl '\n'

long long fact(ll x){
   ll f=1;
   for(ll i=x; i>=1; i--){
      f= f*i;
   }
   return f;
}
void solve(){
      
       ll x;
       cin>>x;
       vll arr1(x),arr2(x-1),arr3(x-2);
       map<ll,ll> m1,m2,m3;
       f(i,0,x){
        cin>>arr1[i];
        m1[arr1[i]]++;
       }
       f(i,0,x-1){
        cin>>arr2[i];
        m2[arr2[i]]++;
       }
       for(auto i:m1){
        if(m2[i.first]!=i.second){
          cout<<i.first<<endl;
          break;
        }
       }
       f(i,0,x-2){
        cin>>arr3[i];
        m3[arr3[i]]++;
       }
       for(auto i:m2){
        if(m3[i.first]!=i.second){
          cout<<i.first<<endl;
          break;
        }
       }


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
      ll t=1;
      //cin>>t; 
        while(t--){
    solve();
}
}

