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

void solve(){
     ll x,one=0,two=0;
     cin>>x;
     vll arr(x);
     f(i,0,x){
        cin>>arr[i];
         if(arr[i]==1){
            one++;
         }else{
            two++;
         }
     }
     if(one>0 && two>0){
        cout<<"Yes"<<endl;
     }else{
        cout<<"No"<<endl;
     }
     

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
      ll t;
       cin>>t; 
       while(t--){
    solve();
 }
}


