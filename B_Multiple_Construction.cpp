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
     ll l=x;
     vll arr(2*x,0);
     
        f(i,0,(2*x)-1){
           f(j,i+1,2*x){
            if(l>0 && (j-i)%l==0 && arr[i]==0 && arr[j]==0){
                arr[j]=l;
                arr[i]=l;
                l--;
                break;
            }
           }
        }
     f(i,0,2*x){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int main(){
      ll t;
     cin>>t; 
     while(t--){
    solve();
}
}


