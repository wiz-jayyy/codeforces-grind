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
    #include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define ld long double
#define f(i,x,y) for(ll i=x; i<(y+1); i++)
#define cf(i,x,y) for(ll i=x; i<=(y+1); i++)
#define rf(i,x,y) for(ll i=x-1; i>=(y+1); i--)
#define endl '\n'

long long fact(ll x){
   ll f=1;
   for(ll i=x; i>=1; i--){
      f= f*i;
   }
   return f;
}
  
void solve(){
  
     ll x,mini=INT_MAX;
     cin>>x;
     vll arr(x);
     f(i,0,x){
        cin>>arr[i];
     }
     f(i,0,x-1){
        mini=min(mini,arr[i]+arr[i+1]);
     }
     cout<<mini<<endl;
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


}

int main(){
   ll t;
    cin>>t; 
    while(t--){
    solve();
}
}


