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
      ll arr[3][3];
      f(i,0,3){
        f(j,0,3){
            cin>>arr[i][j];
        }
      }
      ll ans[3][3];
      if((arr[0][0] + arr[0][1] + arr[1][0])%2==0 ){
        ans[0][0] = 1;
      }else{
        ans[0][0] = 0;
      }
      if((arr[0][0] + arr[0][1] + arr[0][2] + arr[1][1])%2==0){
           ans[0][1] = 1;
      }else{
        ans[0][1] = 0;
      }
      if((arr[1][2] + arr[0][1] + arr[0][2])%2==0){
        ans[0][2] = 1;
      }else{
        ans[0][2]=0;
      }
      if((arr[0][0] + arr[1][0] + arr[2][0] + arr[1][1])%2==0){
        ans[1][0]=1;
      }else{
        ans[1][0]=0;
      }
      if((arr[0][1] + arr[1][0] + arr[1][2] + arr[1][1] + arr[2][1])%2==0){
        ans[1][1]=1;
      }else{
        ans[1][1]=0;
      }
      if((arr[0][2] + arr[1][2] + arr[2][2] + arr[1][1])%2==0){
        ans[1][2]=1;
      }else{
        ans[1][2]=0;
      }
      if((arr[2][0] + arr[1][0] + arr[2][1])%2==0){
        ans[2][0]=1;
      }else{
        ans[2][0]=0;
      }
      if((arr[2][2] + arr[1][1] + arr[2][0] + arr[2][1])%2==0){
        ans[2][1]=1;
      }else{
        ans[2][1]=0;
      }
      if((arr[2][1] + arr[1][2] + arr[2][2])%2==0){
        ans[2][2]=1;
      }else{
        ans[2][2]=0;
      }
      f(i,0,3){
        f(j,0,3){
            cout<<ans[i][j];
        }
        cout<<endl;
      }
 
  
       
}

int main(){
   //ll t;
    //cin>>t; 
    //while(t--){
    solve();
//}
}


