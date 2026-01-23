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
   ll x,y,ans=0,maxi=INT_MIN,l,d,n;
   cin>>x>>y;
   vll arr(x);
   bool stat=true;
   while(x--){
    ll a,b,c;
    cin>>a>>b>>c;
    if(maxi<a*b-c){
        maxi=a*b-c;
        l=c;
        d=a;
        n=b;
    }
   }
    if(maxi<=0){
        cout<<-1<<endl;
    }else{
     if(y>=maxi){
    if(y%maxi==0){
        ans+=y/maxi;
        cout<<ans<<endl;
    } else{
       ans+=y/maxi;
       y=y%maxi;
       f(i,0,n-1){
         y-=d;
         if(y<=0){
          bool stat=false;
          break;
         }
       }
       if(stat){
        cout<<ans+1<<endl;
       }else{
        cout<<ans<<endl;
       }
    }
    
    }else{
        cout<<0<<endl;
    }
    
    }
    }
   
    
    
    
    
   
    
    

   




int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1;
  cin >> t;
  while (t--){
    solve();
  }
}
