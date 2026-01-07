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
      ll x,y,l=0,b=0;
      cin>>x>>y;
      vll arr(x);
      f(i,0,x){
        cin>>arr[i];
      }
      while(x>0){
        f(i,0,x){
            if(arr[i]>0){
                arr[i]-=y;
                l=i;
            }else{
                b++;
            }
        }
        if(b==x){
            break;
        }else{
            b=0;
        }
      }
      cout<<l+1<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
    // ll t;
    //  cin>>t; 
    //  while(t--){
    solve();
// }
}


