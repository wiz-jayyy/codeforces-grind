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
     vll arr(t);
     f(i,0,t){
        cin>>arr[i];
     }
     map<int,int> m;
     f(i,0,t){
        m[arr[i]]++;
     }
     cout<<m.size()<<endl;


    
}


