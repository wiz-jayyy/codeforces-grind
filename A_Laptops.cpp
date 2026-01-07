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
    ll x;
    cin>>x;
    vector<pair<ll,ll>> arr;
    ll a,b;
    bool stat=false;
    while(x--){
       cin>>a>>b;
       arr.push_back({a,b});
    }
    sort(arr.begin(),arr.end());
    ll first=arr[0].first,last=arr[0].second;
    for(auto i:arr){
        if(((i.first)>first && (i.second)<last)){
             stat=true;
             break;
        }else{
            first=i.first;
            last=i.second;
        }
    }
    if(stat){
        cout<<"Happy Alex"<<endl;
    }else{
        cout<<"Poor Alex"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
      ll t=1;
      //cin>>t; 
        while(t--){
    solve();
}
}

