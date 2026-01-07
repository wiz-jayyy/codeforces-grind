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
    ll x,ans=0,vns=0;
    cin>>x;
    vll arr(x);
    f(i,0,x){
        cin>>arr[i];
    }
    if(x==1 || x==2){
      cout<<0<<endl;
    }else{
        f(i,0,x){
            if(arr[i]!=i+1 || i!=x-arr[i]){
                ans++;
            }
        }
         f(i,0,x){
             if(i!=x-arr[i]){
                 vns++;
             }
        }
        cout<<min(ans,vns)<<endl;
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

