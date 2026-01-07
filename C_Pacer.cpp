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
     ll x,y;
     cin>>x>>y;
     ll l=0, point=0;
     vll arr1(x), arr2(y);
     f(i,0,x){
        cin>>arr1[i]>>arr2[i];
     }
     
     f(i,0,x-1){
        if(l==arr2[i]){
          point+=arr1[i];
          arr1[i+1] = arr1[i+1] - arr1[i];
        }else{
             l=arr2[i];
            if(arr1[i]>1){
             point+=arr1[i]-1;
            }else{
                point+=arr1[i];
            }
          arr1[i+1] = arr1[i+1] - arr1[i];
        }
     }
     if(l==arr2[x-1]){
          point+=arr1[x-1];
        }else{
            point+=arr1[x-1]-1;
        }
    cout<<point<<endl;

}

int main(){
    ll t;
      cin>>t; 
      while(t--){
    solve();
}
}


