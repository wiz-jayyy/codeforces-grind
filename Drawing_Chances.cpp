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
     ll n,m,l=0;
     cin>>n>>m;
     string s;
     cin>>s;
     if(n%2!=0){
        cout<<"No"<<endl;
     }else{
        f(i,0,m){
           if(s[i]=='0'){
              l++;
           }
        }
        if(l>n/2 || (m-l)>n/2){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
     }
}

int main(){
      ll t;
     cin>>t; 
     while(t--){
    solve();
}
}


