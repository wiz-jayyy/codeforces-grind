#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define f(i,x,y) for(ll i=x; i<y; i++)
#define cf(i,x,y) for(ll i=x; i<=y; i++)
#define rf(i,x,y) for(ll i=x-1; i>=y; i--)
#define endl '\n'

void solve(){
      ll x;
      cin>>x;
      ll l=0, m=0,q=0;
      vll arr(x);
      f(i,0,x){
        cin>>arr[i];
      } 
      ll i=x-2;
      while(i>=0){
        if( arr[i]>=arr[i+1]){
            arr[i] = arr[i]/2;
            l++;
            
        }else if( i!=0 && arr[i]==0){
            m++;
            break;
        }else{
            i--;
        }
            
        
      }
      if(m>0){
        cout<<-1<<endl;
      }else{
        cout<<l<<endl;
      }
       
}

int main(){
    ll t;
    cin>>t; 
    while(t--){
    solve();
}
}


