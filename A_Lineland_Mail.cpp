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
     vll arr(x);
     f(i,0,x){
        cin>>arr[i];
     }
     f(i,0,x){
        if(i==0){
            cout<<abs(arr[i]-arr[i+1])<<" "<<abs(arr[i]-arr[x-1])<<endl;
        }else if(i==x-1){
            cout<<abs(arr[i]-arr[x-2])<<" "<<abs(arr[i]-arr[0])<<endl;
        }else{
            cout<<min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]))<<" "<<max(abs(arr[i]-arr[0]), abs(arr[i]-arr[x-1]))<<endl;
        }
     }

       
}

int main(){
   // ll t;
    //cin>>t; 
    //while(t--){
    solve();
//}
}


