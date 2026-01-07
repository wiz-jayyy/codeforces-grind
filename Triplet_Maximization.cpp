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

void solve(){
     ll x,y,sum=0;
     cin>>x>>y;
     while(y>0 && x>0){
         if(x-2>=0){
         y--;
          x=x-2;
          sum+=2;
        }
        else if(x-1==0){
            x--;
            y = y-2;
            sum+=2;
        }
     }
     if(x!=0){
        sum+=x/3;
     }
     else if(y!=0){
        sum+=(y/3)*2;
     }
     cout<<sum<<endl;

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


