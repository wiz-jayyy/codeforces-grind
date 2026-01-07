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

long long prime(ll x){
   ll l=0;
    f(i,2,x){
        if(x%i==0){
           l++;
           break;
        }
    }
    if(l>0){
        return 1;
    }else{
        return 0;
    }
}

long long pow(ll x, ll y){
   ll final=1;
    for(ll i=1; i<=y; i++){
        final*=x;
    }
    return final;
}


void solve(){
    ll x,one=0,two=0,three=0,final=0;
    cin>>x;
    vll arr(x);
    f(i,0,x){
        cin>>arr[i];
        if(arr[i]==1){
            one++;
        }else if(arr[i]==2){
            two++;
        }else{
            three++;
        }
    }
    final = ((one*(one-1))/2) + (one*two) + (two*three);
   cout<<final<<endl;
     
    
     
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


