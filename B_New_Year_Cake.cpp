#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define ld long double
#define f(i, x, y) for (ll i = x; i < y; i++)
#define cf(i, x, y) for (ll i = x; i <= y; i++)
#define rf(i, x, y) for (ll i = x - 1; i >= y; i--)
#define endl '\n'



void solve(){
    
   ll x,y,a,b,num1=0,num2=0;
   cin>>x>>y;
    a=x,b=y;
    x-=1;
    num1++;
    y-=2;
    if(y>=0){
        num1++;
    }
    ll i=4,j=8;
    while(x>0 && y>=0){
         x-=i;
         i*=4;
         if(x>=0){
            num1++;
         }else{
            break;
         }
         y-=j;
         j*=4;
         if(y>=0){
            num1++;
         }
    }

    b-=1;
    num2++;
    a-=2;
    if(a>=0){
        num2++;
    }
      i=4,j=8;
    while(a>=0 && b>0){
         b-=i;
         i*=4;
         if(b>=0){
            num2++;
         }else{
            break;
         }
         a-=j;
         j*=4;
         if(a>=0){
            num2++;
         }
    }

    cout<<max(num1,num2)<<endl;

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
