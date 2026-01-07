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
    ll a, b, c, d, count0 = 0, count1 = 0, ans = 0,
       maxi = 0x8000000000000000L, mini = 0x7fffffffffffffffL, sum = 0;
    string s,t;
    cin>>s;
    cin>>t;
    vector<pair<char,int>> arr,brr;
    arr.push_back({s[0],1});
    f(i,1,s.length()){
        if(arr.back().first == s[i]){
            pair<char,int> p = arr.back();
            arr.pop_back();
            p.second++;
            arr.push_back(p);
        }
        else{
            arr.push_back({s[i],1});
        }
    }

    brr.push_back({t[0],1});
    f(i,1,t.length()){
        if(brr.back().first == t[i]){
            pair<char,int> p = brr.back();
            brr.pop_back();
            p.second++;
            brr.push_back(p);
        }
        else{
            brr.push_back({t[i],1});
        }
    }

    if(arr.size()!=brr.size()){
        cout<<"NO"<<endl;
        return;
    }
//     for(auto i:arr){
//         cout<<i.ff<<" "<<i.ss<<endl;
//     }
//     cout<<endl;


// for(auto i:brr){
//         cout<<i.ff<<" "<<i.ss<<endl;
//     }
//     cout<<endl;

    f(i,0,arr.size()){
         pair<char,int> p1 = arr[i];
         pair<char,int> p2 = brr[i];

         if(p1.ff != p2.ff){
            cout<<"NO"<<endl;
            return;
         }

         if(p1.ss*2 < p2.ss || p1.ss >p2.ss){
            cout<<"NO"<<endl;
            return;
         }

    }

    cout<<"YES"<<endl;



}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll testcase = 1;
    cin >> testcase;
    while (testcase--) solve();
    return 0;
}