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
     ll x,y;
     cin>>x>>y;
    if(y!=10){
     f(i,0,x){
       cout<<y;
    }
    cout<<endl;
    }else if(y==10 && x>1){
      cout<<1;
        f(i,0,x-1){
            cout<<0;
        }
        cout<<endl;
    }else{
        cout<<-1<<endl;
    }

}

int main(){
    // ll t;
    //  cin>>t; 
    //  while(t--){
    solve();
//}
}


