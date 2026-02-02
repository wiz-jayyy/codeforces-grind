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
 
   ll x,num=0,ans=0;
   cin>>x;
   bool stat=false;
   string s;
   cin>>s;
   if(x<=2){
    cout<<1<<endl;
   }else{
    f(i,0,4){
        if(s[2]=='1' && s[0]=='0' && s[1]=='0'){
        s[1]='1';
      //  cout<<s<<endl;
    }if(s[x-3]=='1' && s[x-2]=='0' && s[x-1]=='0'){
        s[x-2]='1';
       // cout<<s<<endl;
    }if(s[0]=='0' && s[1]=='0' && s[2]=='0'){
        s[1]='1';
       // cout<<s<<endl;
    }if(s[x-3]=='0' && s[x-2]=='0' && s[x-1]=='0'){
        s[x-2]='1';
       // cout<<s<<endl;
    }
    }
   
    f(i,0,x){ 
        if(s[i]=='1'){
            stat=true;
            ans+=num/3;
            num=0;
          //  cout<<ans<<endl;
        }
        if(stat && s[i]=='0'){
            num++;
        }
    }
       ans+=num/3;
    f(i,0,x){
        if(s[i]=='1'){
            ans++;
        }
    }
    cout<<ans<<endl;
   }
   
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1;
  cin >> t;
  while (t--){
    solve();
  }
}
