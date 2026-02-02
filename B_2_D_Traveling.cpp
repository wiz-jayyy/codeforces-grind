#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ff first
#define ss second
#define pb(x) push_back(x)
#define vll vector<ll>
#define setbits(x) __builtin_popcountll(x)
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define M 1000000007
#define PI 3.1415926535897932384626433832795
#define ps(x,y) fixed<<setprecision(y)<<x
#define endl '\n'
#define all(x) (x).begin(),(x).end()

template <typename T>
ostream & operator << (ostream & os, const vector<T> & vec) {
    for(auto elem : vec) os << elem << ' ';
    return os;
}

template<typename T, size_t n>
void print(T const(& arr)[n]) {
    for (size_t i = 0; i < n; i++) cout << arr[i] << ' ';
}

ll power(ll x, ll n) {
    ll pow = 1L;
    while (n) {
        if (n & 1) pow *= x;
        n >>= 1;
        x = x * x;
    }
    return pow;
}

void solve() {
    ll maxi = 0x8000000000000000L, mini = 0x7fffffffffffffffL,meni=0x7fffffffffffffffL;
    ll x,y,a,b,ans=0;
    cin>>x>>y>>a>>b;
    ll initialx,initialy,finalx,finaly;
    bool stat=false,vtat=false;
    ll k=x-y;
    if(y==0){
       vector<pair<ll,ll>> arr(x);
       f(i,0,x){
        cin>>arr[i].first>>arr[i].second;
         if(a-1==i){
            initialx=arr[i].first;
            initialy=arr[i].second;
        }
        if(b-1==i){
            finalx=arr[i].first;
            finaly=arr[i].second;
        }
       }
       sort(arr.begin(),arr.end());
       ans=abs(initialx-finalx)+abs(initialy-finaly);
       cout<<ans<<endl;
    }else if(k==0){
        vector<pair<ll,ll>> arr(x);
        f(i,0,x){
            cin>>arr[i].first>>arr[i].second;
        }
        cout<<0<<endl;
    }else{
        vector<pair<ll,ll>> arr(y),brr(k);
       f(i,0,y){
        cin>>arr[i].first>>arr[i].second;
        if(a-1==i){
            initialx=arr[i].first;
            initialy=arr[i].second;
        }
        if(b-1==i){
            finalx=arr[i].first;
            finaly=arr[i].second;
        }
    }
       f(i,0,k){
         cin>>brr[i].first>>brr[i].second;
        if(a-1==i+y){
            initialx=brr[i].first;
            initialy=brr[i].second;
        }
        if(b-1==i+y){
            finalx=brr[i].first;
            finaly=brr[i].second;
        }
    }
    //cout<<initialx<<" "<<initialy<<endl;
    //cout<<finalx<<" "<<finaly<<endl;
   // sort(all(arr));
    //sort(all(brr));
    //cout<<arr[y-1].first<<" "<<arr[y-1].second<<endl;
    if(a<=y && b<=y){
        cout<<0<<endl;
    }else if(a>y && b>y){
        ans=abs(initialx-finalx)+abs(initialy-finaly);
        f(i,0,y){
            mini=min(mini,abs(initialx-arr[i].first)+abs(initialy-arr[i].second));
            meni=min(meni,abs(finalx-arr[i].first)+abs(finaly-arr[i].second));
        }
       // cout<<meni<<endl;
        cout<<min(ans,mini+meni)<<endl;
    }else{
        f(i,0,k){
            if((brr[i].first==initialx && brr[i].second==initialy) || (brr[i].first==finalx && brr[i].second==finaly)){
               f(j,0,y){
                mini=min(mini,abs(arr[j].first-brr[i].first) + abs(arr[j].second - brr[i].second));
               }
               cout<<mini<<endl;
            }
        }
    }
    }
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll testcase = 1;
    cin >> testcase;
    while (testcase--) solve();
    return 0;
}