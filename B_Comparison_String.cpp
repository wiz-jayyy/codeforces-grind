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
        ll x;
        cin>>x;
        string s;
        cin>>s;
        vector<ll> arr(x+1);
        arr[0] =1;
        f(j,0,x){
            if(s[j]=='<'){
                arr[j+1] = arr[j]++;
            }else{
                arr[j+1] = arr[j]--;
            }
        }
        map<ll,ll> m;
        f(j,0,x+1){
            m[arr[j]]++;
        }
        cout<<m.size()<<endl;
    }
}


