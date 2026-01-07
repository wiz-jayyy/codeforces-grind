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
    ll x,maxi=INT_MIN,l=0,mini=INT_MAX,no=0;
    cin>>x;
     vll arr(x);
     map<ll,ll> m;
     f(i,0,x){
      cin>>arr[i];
      m[arr[i]]++;
      maxi=max(maxi,arr[i]);
      mini=min(mini,arr[i]);
     }
    for(auto i:m){
        if(i.first!=mini && i.first!=maxi){
            if(i.second<2){
               no++;
               break;
            }
        }
    }
    if(m.size()==1){
        cout<<"YES"<<endl;
    }else{
        if(x%2!=0){
        if(m[maxi]%2==0 && m[mini]%2!=0 && no==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        if(m[mini]%2!=0 && m[maxi]%2!=0 && no==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
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

