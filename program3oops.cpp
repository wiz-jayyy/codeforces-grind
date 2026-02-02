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
    
   ll x=1;
   while(x>0){

    cout<<"ENTER YOUR OPERATION:"<<endl;
    string s;
    cin>>s;
    if(s=="ADDITION"){
        ll a,b;
        cout<<"ENTER YOUR NUMBERS:"<<endl;
        cin>>a>>b;
        cout<<a+b<<endl;        
    }else if(s=="SUBTRACTION"){
         ll a,b;
        cout<<"ENTER YOUR NUMBERS:"<<endl;
        cin>>a>>b;
        cout<<a-b<<endl; 
    }else if(s=="MULTIPLICATION"){
         ll a,b;
        cout<<"ENTER YOUR NUMBERS:"<<endl;
        cin>>a>>b;
        cout<<a*b<<endl; 
    }else if(s=="DIVISION"){
         ll a,b;
        cout<<"ENTER YOUR NUMBERS:"<<endl;
        cin>>a>>b;
        cout<<a/b<<endl; 
    }else if(s=="EXIT"){
         break;
    }else{
        cout<<"WRONG INPUT"<<endl;
    }
   }

}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1;
 // cin >> t;
  while (t--){
    solve();
  }
}
