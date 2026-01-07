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
      ll n,m,l=0;
      cin>>n>>m;
      vll arr(n);
      f(i,0,n){
        cin>>arr[i];
      }
      ll mini=0,minele=0;
      f(i,0,n){
          minele = min(minele,arr[i]);
      }
      while(minele<=m){
         l =(accumulate(arr.begin(), arr.end(),0));
        mini = min(l,mini);
          f(i,0,n){
            arr[i]= (arr[i] + 1)%m;
          }
          
      }
      cout<<mini<<endl;
}

int main(){
      ll t;
     cin>>t; 
     while(t--){
    solve();
}
}


