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
    ll maxi = 0x8000000000000000L, mini = 0x7fffffffffffffffL;
    ll x;
    cin>>x;
    string s;
    cin>>s;
    map<ll,ll> m;
    f(i,0,x){
        if(s[i]>='A' && s[i]<='Z'){
            m[s[i]-'A']++;
        }else{
            m[s[i]-'a']++;
        }
    } 
    ll ans=0;
    ll k=m.size();
   // cout<<k<<endl;
    if(k==1){
        cout<<x<<endl;
    }else{
        ll key=0;
     for(auto i:m){
       if(i.second>maxi){
         maxi=i.second;
         key=i.first;
       }
       
    }
    ans=maxi;
    maxi=INT_MIN;
    for(auto i:m){
        if(i.first!=key){
           maxi=max(maxi,i.second);
        }
    }
    ans+=maxi;
    cout<<ans<<endl;
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