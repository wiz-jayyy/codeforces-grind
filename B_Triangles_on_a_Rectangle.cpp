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
    ll x,y,maxi1=INT_MIN,maxi2=INT_MIN,mini1=INT_MAX,mini2=INT_MAX,
    maxi3=INT_MIN,mini3=INT_MAX,maxi4=INT_MIN,mini4=INT_MAX,ans;
    cin>>x>>y;
    ll a,b,c,d;
    cin>>a;
    vll arr1(a);
    f(i,0,a){
      cin>>arr1[i];
      maxi1=max(maxi1,arr1[i]);
      mini1=min(mini1,arr1[i]);
    }
    maxi1=maxi1-mini1;
    cin>>b;
    vll arr2(b);
    f(i,0,b){
      cin>>arr2[i];
      maxi2=max(maxi2,arr2[i]);
      mini2=min(mini2,arr2[i]);
    }
    maxi1=max(maxi1,maxi2-mini2);
    cin>>c;
    vll arr3(c);
    f(i,0,c){
      cin>>arr3[i];
      maxi3=max(maxi3,arr3[i]);
      mini3=min(mini3,arr3[i]);
    }
    maxi3=maxi3-mini3;
   cin>>d;
   vll arr4(d);
   f(i,0,d){
      cin>>arr4[i];
      maxi4=max(maxi4,arr4[i]);
      mini4=min(mini4,arr4[i]);
    }
    maxi3=max(maxi3,maxi4-mini4);
    ans=max((maxi1*y),(maxi3*x));
    cout<<ans<<endl;
    
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

