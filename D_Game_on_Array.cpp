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
    ll x;
    cin>>x;
    ll a=0, b=0,num=0;
    vll arr(x);
    f(i,0,x){
        cin>>arr[i];
    }
      map<ll,ll,greater<ll>> m;
      f(i,0,x){
        m[arr[i]]++;
      }
      for(const auto& pair:m){
         cout<<pair.first<<endl; 
        if(num=0){
        if((pair.first)%2==0){
            a+= ((pair.first)/2)*(pair.second);
            b+= ((pair.first)/2)*(pair.second);
        }else{
            a+= (((pair.first) - 1)/2)*(pair.second) + (pair.second);
            b+= (((pair.first) - 1)/2)*(pair.second);
            if(num==0){
                num=1;
            }else{
                num=0;
            }
        }
    }else{
        if((pair.first)%2==0){
            b+= ((pair.first)/2)*(pair.second);
            a+= ((pair.first)/2)*(pair.second);
        }else{
            b+= (((pair.first) - 1)/2)*(pair.second) + (pair.second);
            a+= (((pair.first) - 1)/2)*(pair.second);
            if(num==0){
                num=1;
            }else{
                num=0;
            }
        }
    }
      }
     cout<<a<<" "<<b<<endl;
}

int main(){
      ll t;
     cin>>t; 
     while(t--){
    solve();
}
}


