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
   vll arr(x);
   bool stat = false;
   map<ll,ll> m;
   f(i,0,x){
      cin>>arr[i];
      m[arr[i]]++;
   }
   for(auto key:m){
      if(key.second <=1){
         stat=true;
         break;
      }
   }
   if(stat){
      cout<<-1<<endl;
   }else{
      vll number(x);
      ll j=1;
      f(i,0,x){
         number[i]=j;
         j++;
      }
      f(i,0,x-1){
          if(arr[i]==arr[i+1]){
            swap(number[i],number[i+1]);
          }
      }
      f(i,0,x){
         cout<<number[i]<<" ";
      }
      cout<<endl;
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

