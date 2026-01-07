#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define ld long double
#define f(i,x,y) for(ll i=x; i<y; i++)
#define cf(i,x,y) for(ll i=x; i<=y; i++)
#define rf(i,x,y) for(ll i=x-1; i>=y; i--)
#define endl '\n'

long long fact(ll x){
   ll f=1;
   for(ll i=x; i>=1; i--){
      f= f*i;
   }
   return f;
}

void solve(){
    ll x,even=0,l=0;
    cin>>x;
    bool stat=false;
    vll arr(x);
    f(i,0,x){
        cin>>arr[i];
        if(arr[i]%2==0){
           even++;
        }
    }
    if(x<1000){
         f(i,0,x-1){
            f(j,i+1,x){
                if((arr[j]%arr[i])%2==0){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                    stat=true;
                    break;
            }
         }
         if(stat){
                break;
            }
            }
            if(!stat){
                cout<<-1<<endl;
            }
         }else{
            if(even>=2){
            f(i,0,x){
                if((arr[i]%2)==0){
                    l++;
                    if(l<=2){
                      cout<<arr[i]<<" ";
                    }else{
                        break;
                    }                    
                }
            }
        }else{
            f(i,0,x-1){
                if((arr[i+1]<2*arr[i] && (arr[i]%2!=0 && arr[i+1]%2!=0))){
                    cout<<arr[i]<<" "<<arr[i+1]<<endl;
                     stat=true;                 
                    break;
                }
            }
            if(!stat){
                cout<<-1<<endl;
            }
        }
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

