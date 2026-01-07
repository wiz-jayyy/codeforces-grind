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
#define pb push_back

long long fact(ll x){
   ll f=1;
   for(ll i=x; i>=1; i--){
      f= f*i;
   }
   return f;
}

void solve(){
   ll x,maxi=0;
   cin>>x;
   string s;
   cin>>s;
   vll arr1(x),arr2(x);
   unordered_set<char> un,pn;
   f(i,0,x){
     un.insert(s[i]);
       arr1[i]=un.size();
    }
    for(int i=x-1;i>=0;i--){
      pn.insert(s[i]);
      arr2[i]=pn.size();
    }
    f(i,0,x-1){
      maxi=max(arr1[i]+arr2[i+1],maxi);
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

