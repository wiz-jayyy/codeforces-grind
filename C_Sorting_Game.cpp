#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define ld long double
#define f(i, x, y) for (ll i = x; i < y; i++)
#define cf(i, x, y) for (ll i = x; i <= y; i++)
#define rf(i, x, y) for (ll i = x - 1; i >= y; i--)
#define endl '\n'



void solve(){
        
   ll x,a1=-1,a2=-1,num=0;
   cin>>x;
   string s;
   cin>>s;
     bool stat=false;
   f(i,0,x-1){
      if(s[i]=='1' && s[i+1]=='0'){
        stat=true;
      }
   }
   string sorted=s;
   sort(sorted.begin(),sorted.end());
   vll v;
   if(!stat){
    cout<<"Bob"<<endl;
   }else{
      f(i,0,x){
        if(s[i]!=sorted[i]){
            v.push_back(i+1);
            if(a1==-1){
                a1=i+1;
            }else{
                a2=i+1;
            }
            num++;
        }
      }
      cout<<"Alice"<<endl;
      cout<<num<<endl;
      f(i,0,v.size()){
        cout<<v[i]<<" ";
      }
      cout<<endl;
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
