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
   ll x,minus=0,zero=0,final=0;
   cin>>x;
   vll arr(x);
   f(i,0,x){
      cin>>arr[i];
      if(arr[i]==-1){
         minus++;
      }else if(arr[i]==0){
         zero++;
      }
   }
    if(minus%2!=0){
      final+=2;
    }
    final+=zero;
    cout<<final<<endl;

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


