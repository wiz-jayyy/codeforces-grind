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
    ll x,y,ans=0,l;
    cin>>x>>y;
    vll arr1(x),arr2(x),arr3(x);
    f(i,0,x){
      cin>>arr1[i];
    }
    f(i,0,y){
      cin>>arr2[i];
    }
    f(i,0,y){
      cin>>arr3[i];
    }
    vector<pair<ll,ll>> arr;
    f(i,0,y){
      arr.push_back({arr2[i],-arr3[i]});
    }                                          //1 7 7
    sort(arr.begin(),arr.end());              // 2 2 2 6 6
                                              // 7 2 0 2 0
    sort(arr1.begin(),arr1.end());
    ll j=0;
    l=arr1[j];
    f(i,0,y){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    f(i,0,y){
       if(l>=arr[i].first){
             ans++;
             //cout<<ans<<" ";
             if(-arr[i].second==0){
               j++;
               if(j==x){
               // cout<<j<<"yeah"<<ans<<endl;  
                break;
               }
               l=arr1[j];
             }else{
               l=max(-arr[i].second,l);
             }
       }else{
         j++;
         if(j==x){
            break;
         }
         l=arr1[j];
         i--;
       }
    }
    cout<<ans<<endl;

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

