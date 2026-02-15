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
    string s;
    cin>>s;
    ll one=0,zero=0,point=0,initial,final;
    f(i,0,s.length()){
        if(s[i]=='1'){
            one++;
        }else{
            if(point==0){
                initial=i;
                point++;
            }
            final=i;
            zero++;
        }
    } 
    if(one==0){
        cout<<0<<endl;
    }else if(zero==0){
        cout<<(s.length())*(s.length())<<endl;
    }else{
       ll count=0;
       f(i,0,s.length()){
        if(s[i]=='1'){
            count++;
            maxi=max(maxi,count);
        }else{
            count=0;
        }
       }
     //  cout<<initial<<" "<<final<<endl;
       ll k=initial+(s.length())-(final+1);
       maxi=max(maxi,k);
       
       if(maxi%2!=0){
        cout<<((maxi/2)+1)*((maxi/2)+1)<<endl;
       }else{
        cout<<(maxi/2)*((maxi/2)+1)<<endl;
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