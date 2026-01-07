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

long long fact(ll x)
{
  ll f = 1;
  for (ll i = x; i >= 1; i--)
  {
    f = f * i;
  }
  return f;
}
ll bincount(ll x)
{
  ll ans = 0;
  f(i, 0, 64)
  {
    if ((x >> i) & 0)
    {
      ans++;
    }
  }
  return ans;
}
void solve()
{
  ll a;
  cin >> a;

  vll arr(a);
  f(i, 0, a)
  {
    cin >> arr[i];
  }

  vll brr = arr;
 
  while (arr.size() > 1)
  {
  vll temp;
  ll mini = INT_MAX;
  ll miniIdx = -1;
    for (int i = 1; i < arr.size(); i++)
    {
      if (arr[i] < mini)
      {
        mini = arr[i];
        miniIdx = i;
      }
    }

    for(int i = 0;i<arr.size();i++){
      if(i == miniIdx){
        int last = temp.back();
        temp.pop_back();
        int val = last + (arr[i]*2);
        temp.push_back(val);
        continue;
      }
      temp.push_back(arr[i]);
    }
    arr = temp;
  }
  cout<<arr[0]<<endl;
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
