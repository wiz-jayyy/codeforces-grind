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
     ll x, y;
     cin>>x>>y;
     ll l=0,m=0;
     ll arr1[y], arr2[y];
     f(i,0,y){
        cin>>arr1[i]>>arr2[i];
     }
     while(m>-1){
     f(i,0,y){
        if(arr1[i]>=0 && x>arr1[i]){
            x+=arr2[i];
            arr1[i]=-1;
            m++;
            l++;
            break;
        }
     }
     if(m==0){
        break;
     }else{
        m=0;
     }
    }
     if(l==y){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }

}

int main(){
//    ll t;
//     cin>>t; 
//     while(t--){
    solve();
//}
}


