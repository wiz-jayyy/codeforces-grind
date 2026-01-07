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
  ll l=0;
  string vowel = "aeiouyAEIOUY";
  f(i,0,s.length()){
    f(j,0,vowel.length()){
        if(s[i]==vowel[j]){
            l++;
            break;
        }
    }
    if(l==0){
        if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i] - 'A' + 'a';
            }
            cout<<'.'<<s[i];
    }
    l=0;
  }
}

int main(){
   //ll t;
    //cin>>t; 
    //while(t--){
    solve();
//}
}


