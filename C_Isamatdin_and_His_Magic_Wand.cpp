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
   ll x,even=0,odd=0;
   cin>>x;
   vll arr(x);
   f(i,0,x){
      cin>>arr[i];
      if(arr[i]%2==0){
         even++;
      }else{
         odd++;
      }
   }
   if(even==0 || odd==0){
      f(i,0,x){
         cout<<arr[i]<<" ";
      }
      cout<<endl;
   }else{
      sort(arr.begin(),arr.end());
      f(i,0,x){
         cout<<arr[i]<<" ";
      }
      cout<<endl;
   }
    
     


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

