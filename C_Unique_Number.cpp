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
      ll l=0,m=0;
      ll q=8;
      ll arr[9]={0};
     rf(i,10,0){
       if(i==0){
          m++;
          break;
       }
        if(i+l<x){
        arr[q]=i;
        q--;
        l+=i;
       }else if(i+l>x){

       }else{
        arr[q]=i;
        break;
       }
     }
    if(m>0){
        cout<<-1<<endl;
    }else{
     f(i,0,9){
        if(arr[i]>0){
            cout<<arr[i];
        }
     }}
     cout<<endl;
       
}

int main(){
    ll t;
    cin>>t; 
    while(t--){
    solve();
}
}


