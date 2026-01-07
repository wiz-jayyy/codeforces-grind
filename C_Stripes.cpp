#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define vll vector<ll>
#define f(i,x,y) for(ll i=x; i<y; i++)
#define cf(i,x,y) for(ll i=x, i<=y; i++)
#define rf(i,x,y) for(ll i=x-1; i>=y; i--)
#define endl '\n'
 
 
int main(){
    ll t;
    cin>>t;
    f(i,0,t){
        ll l=0,m=0,n=0;
        char arr[8][8];
        f(j,0,8){
            f(k,0,8){
                cin>>arr[j][k];
                 if(j==0 && arr[j][k]=='B'){
                    l=k;
                     n++;
                 }
            }
        }
        if(n=0){
            cout<<"R"<<endl;
        }else{
        f(i,0,8){
            if(arr[i][l]=='R'){
               m++;
            }
        }
        if(m>0){
            cout<<"R"<<endl;
        }else{
            cout<<"B"<<endl;
        }
    }
}}
