#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define ld long double
#define f(i, x, y) for (ll i = x; i < y; i++)
#define cf(i, x, y) for (ll i = x; i <= y; i++)
#define rf(i, x, y) for (ll i = x - 1; i >= y; i--)
#define endl '\n'

void print(vector<ll> arr){
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

long long fact(ll x)
{
  ll f = 1;
  for (ll i = x; i >= 1; i--)
  {
    f = f * i;
  }
  return f;
}

void solve()
{
        int N;
        cin >> N;
        string S;
        cin >> S;

        int ones = 0;
        for (char c : S) {
            if (c == '1') ones++;
        }

        int max_f = min(N, 2 * ones);
        int swaps = 0;
        for (int i = 0; i < ones; i++) {
            if (S[i] == '0') swaps++;
        }

        cout << max_f << " " << swaps << "\n";
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
}
