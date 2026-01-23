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


/*
 1- write a program to implement a function that calculated no of space in a program
 2- input any word and calculate sum of alphabet in ascii
 3- find kth smallest no of an array;

*/  
void solve(){
        

    ll num=0;
   string s;
   cin>>s;
   f(i,0,s.length()){
      if(s[i]=='Y'){
        num++;
      }
   }
   
   if(num>=2){
    cout<<"NO"<<endl;
   }else{
    cout<<"YES"<<endl;
   }
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t=1;
  cin>>t;
  while(t--){
    solve();
  }
}
