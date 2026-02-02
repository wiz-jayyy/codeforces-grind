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
 
   ll x;
   cin>>x;
   vll arr(x+1);
   map<ll,ll> m;
   m[1]++;
   m[x]++;
  if(x>2){
      arr[x]=1;
   arr[x-1]=x;
   for(ll i=x-2; i>=0; i--){
    if(arr[i+1]>i){
        if(m[abs(arr[i+1]-i)]==0){
            arr[i]=abs(arr[i+1]-i);
        }else{
             arr[i]=arr[i+1]+i;
        }
        m[arr[i]]++;
    }else{
       if(m[arr[i+1]+i]==0){
          arr[i]=arr[i+1]+i;
       }else{
        arr[i]=abs(arr[i+1]-i);
       }
        
    }
   }
   f(i,1,x+1){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
  }else{
    f(i,1,x+1){
        arr[i]=i;
    }
    f(i,1,x+1){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
