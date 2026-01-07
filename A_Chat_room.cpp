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
    string s;
    cin>>s;
    ll l=0;
    f(i,0,s.length()){
        if(s[i]=='h'){
            l++;
            f(j,i+1,s.length()){
                if(s[j]=='e'){
                    l++;
                    f(k,j+1,s.length()){
                        if(s[k]=='l'){
                            l++;
                            f(m,k+1,s.length()){
                        if(s[m]=='l'){
                            l++;
                            f(n,m+1,s.length()){
                        if(s[n]=='o'){
                            l++;
                            break;
                        }
                    }
                        }
                        if(l>=4){
                            break;
                        }
                    }
                        }
                        if(l>=3){
                            break;
                        }
                    }
                }
                if(l>=2){
                            break;
                        }
            }
        }
        if(l>=1){
                            break;
                        }
    }
    if(l==5 && s.length()>=5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}

int main(){
//    ll t;
//     cin>>t; 
//     while(t--){
    solve();
//}
}


