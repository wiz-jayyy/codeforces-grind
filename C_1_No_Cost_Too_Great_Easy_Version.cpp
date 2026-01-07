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

vector<ll> primeFac(ll n) {
    vector<ll> res;
    set<ll> st;
    if (n % 2 == 0) {
        st.insert(2);
        while (n % 2 == 0) n /= 2;
    }

    // Check for odd prime factors
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            st.insert(i);
            while (n % i == 0) n /= i;
        }
    }

    if (n > 2) st.insert(n);

    for(auto i:st){
        res.push_back(i);
    }
    return res;
}

void solve() {
    ll a, b, c, d, count0 = 0, count1 = 0, ans = 0,
       maxi = 0x8000000000000000L, mini = 0x7fffffffffffffffL, sum = 0;
    cin>>a;
    vll arr(a),brr(a);
    ll even = 0;
    f(i,0,a){
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
        }
    } 
    f(j,0,a){
        cin>>brr[j];
    }
    if(even>=2){
        cout<<0<<endl;
        return;
    }
    sort(arr.begin(),arr.end());
    map<ll,ll> m;
    f(i,0,a){
        vector<ll> prime = primeFac(1ll*arr[i]);
        for(auto ele :prime){
            if(m.find(ele)!= m.end()){
                cout<<0<<endl;
                return;
            }
            m[ele]++;
        }
    }
    if(even == 1){
        cout<<1<<endl;
        return;
    }

    map<ll,ll> mp;
    f(i,0,a){
        vector<ll> primePlusone = primeFac(1ll*(arr[i]+1));
        vector<ll> prime = primeFac(1ll*(arr[i]));
        for(auto ele :primePlusone){
            if(m.find(ele)!= m.end()){
                cout<<1<<endl;
                return;
            }
        }
        for(auto ele :prime){
            m[ele]++;
        }

    }

    cout<<2<<endl;


}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll testcase = 1;
    cin >> testcase;
    while (testcase--) solve();
    return 0;
}