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
  ll l=0,m=0,q=0,w=0;
  rf(i,s.length(),0){
    if(s[i]=='0'){
           m++;
        rf(j,i,0){
            if(s[j]=='0' || s[j]=='5'){
                m++;
                break;
            }
            else{
                l++;
            }
        }
        break;
    }else{
        l++;
    }
  }
  rf(i,s.length(),0){
    if(s[i]=='5'){
           q++;
        rf(j,i,0){
            if(s[j]=='2' || s[j]=='7'){
                q++;
                break;
            }
            else{
                w++;
            }
        }
        break;
    }else{
        w++;
    }
  }

  if(q>=2 && m>=2){
    cout<<min(l,w)<<endl;
  }else if(q>=2 && m<2){
    cout<<w<<endl;
  }else{
    cout<<l<<endl;
  }
  
       
}

int main(){
   ll t;
    cin>>t; 
    while(t--){
    solve();
}
}


