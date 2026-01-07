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
      ll x,l=0;
      cin>>x;
      vll arr(x);
      f(i,0,x){
        cin>>arr[i];
      }
      f(i,0,x-2){
        if(min({arr[i],arr[i+1],arr[i+2]})==arr[i+1]){
             l++;
             break;
        }
      }
      if(l>0){
        cout<<"NO"<<endl;
      }else{
        cout<<"YES"<<endl;
      }
}

int main(){
      ll t;
     cin>>t; 
     while(t--){
    solve();
}
}


