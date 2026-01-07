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
   if(x%2==0){
      cout<<x/2<<" "<<x/2<<endl;
   }else{
      ll a=x/2,b=(x/2)+1;
      while(b%a!=0){
         a--;
         if(a==1){
            break;
         }
         b++;
      }
      cout<<a<<" "<<b<<endl;
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

