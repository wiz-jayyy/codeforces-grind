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
  ll twopower(ll x){
      while(x>=1){
         if(x%2==0){
            x/=2;
         }else{
            if(x==1){
               return 1;
            }else{
               return 0;
            }
         }
      }
  }

void solve(){
      
     ll x,y,mini=INT_MAX,sum=0,diff=0;
     cin>>x>>y;
     vll arr1(x),arr2(y);
     map<ll,ll> ma,mb;
     f(i,0,x){
      cin>>arr1[i];
      ma[arr1[i]]++;
      //mb[arr1[i]]=0;
     }
     f(i,0,y){
        cin>>arr2[i];
        mb[arr2[i]]++;
       
     }
     for(auto pair: ma){
        if(mb.count(pair.first)>0){
         mini=min(mb[pair.first],pair.second);
         sum+=2*mini*(pair.first);
         mini=INT_MAX;
     }}
      diff=accumulate(arr1.begin(),arr1.end(),0) + accumulate(arr2.begin(),arr2.end(),0);
      cout<<diff-sum<<endl;
     


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

