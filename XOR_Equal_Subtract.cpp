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
       
    ll x,q=0;
    cin>>x;
    vll arr(x);
    map<ll,ll> m1;
    f(i,0,x){
        cin>>arr[i];
        if((i!=0 && (arr[i]%arr[i-1]!=0)) || arr[i]==arr[i-1]){
            q++;
        }
        m1[arr[i]]++;
    }
    map<ll,ll> m;
    
       f(i,0,x-1){
        f(j,i+1,x){
            if((arr[i]^arr[j])==abs(arr[i]-arr[j])){
                m[i]++,m[j]++;
                
            }
        }
       }
       if(q==0){
        cout<<1<<endl;
       }else{
        cout<<m.size()<<endl;
       }
         
       
      
}

int main(){
   ll t;
    cin>>t; 
    while(t--){
    solve();
}
}


