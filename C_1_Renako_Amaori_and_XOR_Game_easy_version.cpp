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
     ll x,xor1,xor2,l;
     cin>>x;
     vll arr1(x),arr2(x);
     f(i,0,x){
        cin>>arr1[i];
     }
     f(i,0,x){
        cin>>arr2[i];
     }
     xor1=arr1[0],xor2=arr2[0];
     f(i,1,x){
        xor1^=arr1[i];
        xor2^=arr2[i];
     }
     if(xor1==xor2){
        cout<<"Tie"<<endl;
     }else{
        f(i,0,x){
           if(i%2==0){
            if(arr1[i]!=arr2[i]){
                l=1;
            }
           }else{
            if(arr1[i]!=arr2[i]){
                l=0;
            }
           }
        }
        if(l==1){
            cout<<"Ajisai"<<endl;
        }else{
            cout<<"Mai"<<endl;
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

