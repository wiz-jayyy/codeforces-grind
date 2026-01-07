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
   string s;
   cin>>s;
   ll x,l=0;
   cin>>x;
   vll arr(s.length()-1);
   f(i,0,s.length()-1){
       if(s[i]==s[i+1]){
          l++;
       }
       arr[i]=l;
   }
   f(i,0,x){
      ll a,b;
      cin>>a>>b;
      a--,b--;
      if(a>0){
        cout<<arr[b-1]-arr[a-1]<<endl;
      }else{
        cout<<arr[b-1]<<endl;
      }
   }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
      ll t=1;
      //cin>>t; 
        while(t--){
    solve();
}
}

