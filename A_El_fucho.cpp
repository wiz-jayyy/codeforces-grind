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
         ll x,final=0,y=0;
         cin>>x;
        if(x%2==0){
         final+=x/2;
         x=x/2;
         y=x;
        }else{
         final+=x/2;
         x=(x/2)+1;         // x=2 , y=1, f=1
         y=x-1;
        }
         while(x>1 || y>1){
            if(x%2==0){
               x=x/2;              //x=1, y=2 , f=2
               y+=x;
               final+=x;
            }else{
              if(x>1)
            { 
               x=(x/2)+1;
               y+=x-1;
               final+=x-1;
            }
        }
            if(y%2==0){
                y=y/2;           // y=1      , f=3
                final+=y;
            }else{
               if(y>1){
                 y=(y/2)+1;
                 final+=y-1;
            }
        }
            
         }
         cout<<final+1<<endl;
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


