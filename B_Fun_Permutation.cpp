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
  vll final(x);
  vll num(x);
  ll p=0,l=0;
  f(i,0,x){
    cf(j,1,x){
        if((arr[i]+j)%3==0){
             f(k,0,p){
                if(j==num[p]){
                    l++; 
                    p++;
                    break; 
                }
             }
             if(l=0){
                final[i]=j;
             }
        }
    }
  }
  f(i,0,x){
    cout<<final[i]<<" ";
  }
  cout<<endl;
  
}
 
int main(){
   ll t;
    cin>>t; 
    while(t--){
    solve();
}
}
 