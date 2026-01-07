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
    f(i, 0, t){
        ll x;
        cin>>x;
        int l=0;
        if(x%2!=0){
            cout<<"YES"<<endl;
        }else{
            while(x%2==0){
                x=x/2;
                if(x==1){
                    l++;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(x%2!=0 && l==0){
                cout<<"YES"<<endl;
            }
        }
         
    }
}


