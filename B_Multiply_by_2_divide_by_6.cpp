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
    for(int i=0; i<t; i++){
        ll x;
        cin>>x;
        ll l=0;
        if(x==1){
            cout<<0<<endl;
        }else{
            while(x>1){
            if(x%6==0){
                x= x/6;
                l++;
                if(x==1){
                    cout<<l<<endl;
                    break;
                }
                
            }else{
                if(x%3==0){
                    x=x*2;
                    l++;
                }else{
                    cout<<-1<<endl;
                    break;
                }
            }
        }
        }
    }
}


