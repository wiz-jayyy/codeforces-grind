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
   ll n,k,b,s;
   cin>>n>>k>>b>>s;
   vll arr(n,0);
   if((s>=k*b) && (s<= k*b + (n*(k-1)))){
        arr[0]=k*b;
        s-=k*b;  
        f(i,0,n){
             if(s<=0){
                break;
             }else{
                arr[i]+=min(s,k-1);
                s-=(k-1);
             }
          }
          f(i,0,n){
            cout<<arr[i]<<" ";
          }
          cout<<endl;
   }else{
    cout<<-1<<endl;
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

