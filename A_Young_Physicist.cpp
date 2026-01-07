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
    map<char,int> m;
    f(i,0,s.length()){
        m[s[i]]++;
    }
    if(m['h']>1 || m['e']>1 || m['l']>2 || m['o']>1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}

int main(){
//    ll t;
//     cin>>t; 
//     while(t--){
    solve();
//}
}


