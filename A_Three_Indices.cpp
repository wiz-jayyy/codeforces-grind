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
      ll m=0,a=0,b=0;
      vll arr(x);
      f(i,0,x){
        cin>>arr[i];   
      }
        ll q=1;
        while(q<x-1){
        f(j,0,q){
            if(arr[j]<arr[q] ){
                   a=j;
                   f(k,q+1,x){
                    if(arr[k]<arr[q]){
                        b=k;
                        break;
                    }
                   }
                   if(b>0){
                     break;
                   }
            }            
        }
        if(b=0){
            q++;
        }
    }
        if(b=0){
            cout<<"NO"<<endl;
        }else{
            cout<<a<<" "<<q<<" "<<b<<endl;
        }
      
       
}

int main(){
   ll t;
    cin>>t; 
    while(t--){
    solve();
}
}


