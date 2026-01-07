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
    ll x,first,last;
    cin>>x;
    string s;
    cin>>s;
    if(s[0]=='0' || s[x-1]=='0'){
      cout<<-1<<endl;
    }else{
      vll arr(x);
      ll j=0;
      f(i,1,x+1){
         arr[j]=i;
         j++;
      }
      f(i,0,x){
         if(s[i]=='0' && s[i-1]=='1' && i!=0){
              first=i;
         }else if(s[i]=='1' && s[i-1]=='0' && i!=0){
            swap(arr[i],arr[first]);
         }
      }
      f(i,0,x){
         cout<<arr[i]<<" ";
      }
      cout<<endl;
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

