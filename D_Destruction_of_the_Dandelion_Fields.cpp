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
     ll x, e=0,o=0;
     cin>>x;
     vll arr(x);
     ll ans=0;
     f(i,0,x){
        cin>>arr[i];
        if(arr[i]%2==0){
            e++;
        }else{
            o++;
        }
     }
     vll arreven(e), arrodd(o);
     ll a=0,b=0;
     f(i,0,x){
        if(arr[i]%2==0){
            arreven[a] = arr[i];
            a++;
        }else{
            arrodd[b]= arr[i];
            b++;
        }
     }
     if(o>0){
     sort(arreven.begin(),arreven.end());
     sort(arrodd.begin(),arrodd.end());
       ans = accumulate(arreven.begin(), arreven.end(),0);
       ans += accumulate(arrodd.begin() + o/2,arrodd.end(),0);
       cout<<ans<<endl;
     }else{
        cout<<0<<endl;
     }

}

int main(){
    ll t;
      cin>>t; 
      while(t--){
    solve();
}
}


