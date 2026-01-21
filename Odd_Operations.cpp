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
       
   ll x,l,a;
   cin>>x;
   bool stat=false,vtat=false;
   if(x%2!=0){
    cout<<0<<endl;
   }else if(x<=10){
    if(x==10){
        cout<<1<<endl;
    } else{
        cout<<-1<<endl;
    }
    
   }else{
      l=x%10;
       a=x;
       while(a>0){
        a/=10;
        if(a%2!=0){
            stat=true;
            break;
        }
        if(a%10>l){
           vtat=true;
        }
        if(stat){
            break;
        }
       }

       if(stat){
        cout<<1<<endl;
       }else if(!stat && vtat){
        cout<<2<<endl;
       }else{
        cout<<3<<endl;
       }
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
