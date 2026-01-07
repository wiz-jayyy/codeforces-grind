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

long long fact(ll x)
{
  ll f = 1;
  for (ll i = x; i >= 1; i--)
  {
    f = f * i;
  }
  return f;
}

void solve(){
    
     ll x,count=0,vount=0,num=INT_MIN,check=INT_MIN;
     cin>>x;
     bool stat=false;
     string s;
     cin>>s;
     
    f(i,0,x-3){
       if(s[i]=='2'){
        count++;
        vount++;
       }
       if(s[i+1]=='0'){
        count++;
        vount++;
       }
       if(s[i+2]=='2'){
        count++;
        vount++;
       }
       if(s[i+3]=='5'){
        count++;
       }else if(s[i+3]=='6'){
        vount++;
       }
         if(count==4){
            stat=true;
         }
         num=max(num,vount);
         count=0;
         vount=0;
     }
        if(stat){
            if(num==4){
                cout<<0<<endl;
            }else{
                cout<<1<<endl;
            }
        }else{
            cout<<0<<endl;
        }
     }
    



int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
}
