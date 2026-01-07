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
    ll x,l=0,zero=0; 
    cin>>x;
    string s;
    cin>>s;
    f(i,0,x){
        if(s[i]=='0'){
            zero++;
        }
    }
    f(i,0,x-3){
        if((s[i]=='0' && s[i+1]=='1' && s[i+2]=='1' && ( s[i+3]=='0' || s[i+3]=='1')) || (x>=3 && s[0]!=0 && s[x-1]!=0 && zero==1)){
            l++;
            break;
        }else if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
            s[i]='1';
            s[i+2]='1';
        }
    }
    if(l>0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

     
}

int main(){
      ll t;
     cin>>t; 
     while(t--){
    solve();
}
}


