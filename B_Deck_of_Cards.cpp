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
     ll x,y;
     cin>>x>>y;
    vector<char> arr(x,'0');
     string s;
     cin>>s;
     ll l=0,k=x-1;
     f(i,0,y){
      if(s[i]=='0'){
         if((l!=0 && arr[l-1]!='?') || l==0){
            arr[l]='-';
            l++;
         }else{
            arr[l]='?';
            l++;
         }
      }else if(s[i]=='1'){
         if((k!=x-1 && arr[k+1]!='?') || k==x-1){
            arr[k]='-';
            k--;
         }else{
            arr[k]='?';
            k--;
         }
      }else if(l==k){
        arr[l]='-';
        break;
      }
      else if(s[i]=='2'){
         arr[l]='?';
         arr[k]='?';
         l++;
         k--;
      }
     }
     f(i,0,x){
      if(arr[i]=='0'){
         cout<<'+';
      }else{
         cout<<arr[i];
      }
     }
     cout<<endl;
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


