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
  string s;
  cin>>s;
  f(i,0,s.length()-2){
    if(s[i]=='F' && s[i+1]=='F' && s[i+2]=='T'){
        s[i+1]='T';
        s[i+2]='F';
    }else if(s[i]=='N' && s[i+1]=='T' && s[i+2]=='T'){
         s[i]='T';
        s[i+1]='N';
    }
  }
  cout<<s<<endl;
}
 
int main(){
   ll t;
    cin>>t; 
    while(t--){
    solve();
}
}
 