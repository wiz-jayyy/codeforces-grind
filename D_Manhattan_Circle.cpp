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
        ll x, y;
        ll l=0,m=0;
        cin>>x>>y;
        ll maxi=0, mini=1000000;
        char arr[x][y];
        f(j,0,x){
            f(k,0,y){
                cin>>arr[j][k];            
            }
        }
        f(j,0,x){
            f(k,0,y){
                if(arr[j][k]=='#'){
                    l=k+1;
                    break;
                }                      
            }
            if(l>0){
                break;
            }
        }
        f(j,0,y){
            f(k,0,x){
                if(arr[k][j]=='#'){
                    m=k+1;
                    break;
                }                      
            }
            if(m>0){
                break;
            }
        }
           cout<<m<<" "<<l<<endl;
        
    }
}


