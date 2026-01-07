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

void solve(){
      string s;
      cin>>s;
      ll z=0,o=0;
      f(i,0,s.length()){
        if(s[i]=='0'){
            z++;
        }else{
            o++;
        }
      }
      if(z==0 || o==0){
        cout<<z+o<<endl;
      }else if(z==o){
        cout<<0<<endl;
      }
      else{
      f(i,0,s.length()){
        if(s[i]=='0' ){
            if(o==0){
                break;
            }else{
            o--;         
            }
        }else if(s[i]=='1' ){
           if(z==0){
            break;
           }else{
            z--;
            }
        }
      }
      cout<<z+o<<endl;
    }
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


