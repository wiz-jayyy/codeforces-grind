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

long long prime(ll x){
   ll l=0;
    f(i,2,x){
        if(x%1==0){
           l++;
           break;
        }
    }
    if(l>0){
        return 1;
    }else{
        return 0;
    }
}


void solve(){
    ll x,l=0;
    cin>>x;
    vll arr(x);
    f(i,0,x){
        cin>>arr[i];
    }
     f(i,0,x){
        f(j,i+1,x){
            ll p = prime(arr[i] + arr[j]);
            if(p==1){
                l++;
            }

        }
     }
    cout<<l<<endl;
    
     
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


