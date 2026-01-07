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
  ll twopower(ll x){
      while(x>=1){
         if(x%2==0){
            x/=2;
         }else{
            if(x==1){
               return 1;
            }else{
               return 0;
            }
         }
      }
  }

void solve(){
    ll l=0;
    ll x;
    cin>>x;
    string a,b;
    cin>>a>>b;
    vll arr1(26,0),arr2(26,0);
    f(i,0,x){
        arr1[a[i]-'a']++;
        arr2[b[i]-'a']++;
    }
   
//    f(i,0,26){
//     cout<<arr1[i]<<" ";
//    }
//    cout<<endl;
//    f(i,0,26){
//     cout<<arr2[i]<<" ";
//    }
//    cout<<endl;
   
     f(i,0,26){
       if(arr1[i]!=arr2[i]){
          l++;
          break;
       }
     }
     if(l>0){
       cout<<"NO"<<endl;
     }else{
       cout<<"YES"<<endl;
     }
     


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

