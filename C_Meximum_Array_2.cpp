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
    ll x,y,z,l,k=0,n;
    cin>>x>>y>>z;
    vll arr(x,1000),arr1(6,1000);
    n=z;
    while(n--){
      ll i=0;
      cin>>arr1[i]>>arr1[i+1]>>arr1[i+2];
      l=y-1;
      if(arr1[0]==2 ){
        for(ll i=arr1[2]-1; i>=arr1[1]-1;i--){
          if(l<0){
            break;
          }
           arr[i]=l;
           l--;
        }
      }else if(arr1[3]==2){
        f(i,arr1[4]-1,arr1[5]){
            if(l<0){
                break;
            }
            arr[i]=l;
            l--;
        }
      }
      i=i+3;

    }
    if(arr1[0]==1 && arr1[3]==1){
              arr[arr1[1]-1]=y;
    }else if(arr1[0]==1){
        if(arr1[1]<arr1[4]){
             arr[arr1[1]-1]=y;
        }else{
            arr[arr1[2]-1]=y;
        }
    }else if(arr1[3]==1){
        if(arr1[1]>arr1[4]){
             arr[arr1[4]-1]=y;
        }else{
            arr[arr1[5]-1]=y;
        }
    }
    
    f(i,0,x){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
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

