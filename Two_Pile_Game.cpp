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
   ll x,a=0,b=0;
   cin>>x;
   bool stat=true;
   vll arr1(x);
   vll arr2(x);
   f(i,0,x){
    cin>>arr1[i];
   }
   f(i,0,x){
      cin>>arr2[i];
   }
     a=min(arr1[0],arr2[0]);
    f(i,1,x){
        if(arr1[i]>=a && arr2[i]>=a){
            a=min(arr1[i],arr2[i]);
        }else{
            if(max(arr1[i],arr2[i])>=a){
                a=max(arr1[i],arr2[i]);
            }else{
                stat=false;
                break;
            }
        }
    }
    if(stat){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
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
