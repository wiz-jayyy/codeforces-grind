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
    string arr1[y], arr2[y],arr3[x];
    f(i,0,y){
        cin>>arr1[i]>>arr2[i];
    }
    f(i,0,x){
        cin>>arr3[i];
    }
    ll p=0;
    while(x--){
       
        f(i,0,y){
        if(arr3[p]==arr1[i] || arr3[p]==arr2[i]){
            if(arr1[i].length()<=arr2[i].length()){
                cout<<arr1[i]<<" ";
            }else{
                cout<<arr2[i]<<" ";
            }
                break;
            
        }
       }
       p++;
    }

}

int main(){
    //  ll t;
    //    cin>>t; 
    //    while(t--){
    solve();
//}
}


