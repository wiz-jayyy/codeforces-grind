#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define ld long double
#define f(i,x,y) for(ll i=x; i<(y+1); i++)
#define cf(i,x,y) for(ll i=x; i<=(y+1); i++)
#define rf(i,x,y) for(ll i=x-1; i>=(y+1); i--)
#define endl '\n'

long long fact(ll x){
   ll f=1;
   for(ll i=x; i>=1; i--){
      f= f*i;
   }
   return f;
}
  
void solve(){
     
   ll x,y,one=0,two=0,m,n;
   cin>>x>>y;
   string s;
   cin>>s;
   f(i,0,x){
       if(s[i]=='1'){
        one++;
       }else if(s[i]=='0'){
        two++;
       }
   }
   if(one%y==0 || one<y){
    m=(one/y);
   }else{
    m=(one/y)+1;
   }
   if(two%y==0 || two<y){
    n=two/y;
   }else{
    n=(two/y)+1;
   }
   
    if((m==n) || ( m+1==n || n+1==m) ){
    cout<<"Yes"<<endl;
   }else{
    cout<<"No"<<endl;
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

