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
    ll x,y,abssum=0,negno=0,mini=INT_MAX,zero=0;
    cin>>x>>y;
    ll arr[x][y];
    f(i,0,x){
        f(j,0,y){
            cin>>arr[i][j];
            abssum+= abs(arr[i][j]);
            if(arr[i][j]<0){
                negno++;
            }
            mini=min(mini,abs(arr[i][j]));
        }
    }
    if(negno%2==0){
        cout<<abssum<<endl;
    }else{
        cout<<abssum-(2*mini)<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
      ll t=1;
      cin>>t; 
        while(t--){
    solve();
}
}

