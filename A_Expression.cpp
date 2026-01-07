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
    f(i,1,s.length()){
         if(s[i]>='A' && s[i]<='Z'){
            l++;
         }
    }
    if(l==s.length()-1){
       cout<<s[0]-'a'+'A';
        f(i,1,s.length()){
            cout<<s[i]-'A' + 'a';
        }
        cout<<endl;
    }else{
        cout<<s<<endl;
    }
    
}

int main(){
//    ll t;
//     cin>>t; 
//     while(t--){
    solve();
//}
}


