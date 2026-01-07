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
     ll l=0,num=0,d=0,pow=1,n=0;
     d=x;
     n=x;
     while(n>0){
         n = n/10;
         l++;
     }
     f(i,0,l){
        f(i,0,l){
            pow *=(d%10);
        }
        num += pow;
        pow=1;
        d = d/10;
     }
     if(num==x){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }

}

int main(){
    ll t;
     cin>>t; 
     while(t--){
    solve();
}
}


