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
   ll x,maxi=0,l=0;
   cin>>x;
   vll arr1(x),arr2(x);
   f(i,0,x){
      cin>>arr1[i];
   }
   f(i,0,x){
      cin>>arr2[i];
   }
   map<ll,ll> ma, mb;
   f(i,0,x){
    l++;
    ma[arr1[i]]=max(ma[arr1[i]],l);
    if(i!=x-1 && arr1[i+1]!=arr1[i]){
        l=0;
    }
}
    l=0;
    f(i,0,x){
    l++;
    mb[arr2[i]]=max(mb[arr2[i]],l);
    if(i!=x-1 && arr2[i+1]!=arr2[i]){
        l=0;
    }
}
   for(auto ite :ma){
    mb[ite.first]+=ite.second;
   }
   for(auto ite:mb){
    maxi=max(maxi,ite.second);
   }
   cout<<maxi<<endl;

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

