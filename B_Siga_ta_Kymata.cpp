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
   ll x,mini=0,maxi=0;
   cin>>x;
   vll arr(x);
   f(i,0,x){
      cin>>arr[i];
      if(arr[i]>arr[maxi]){
         maxi=i;
      }
      if(arr[i]<arr[mini]){
         mini=i;
      }
   }
   
   string s;
   cin>>s;
   if(s[0]=='1' || s[x-1]=='1' || s[mini]=='1' || s[maxi]=='1'){
      cout<<-1<<endl;
   }else{
      cout<<5<<endl;
      cout<<1<<" "<<mini+1<<endl;
      cout<<1<<" "<<maxi+1<<endl;
      cout<<maxi+1<<" "<<x<<endl;
      cout<<mini+1<<" "<<x<<endl;
      cout<<min(mini,maxi)+1<<" "<<max(mini,maxi)+1<<endl;
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

