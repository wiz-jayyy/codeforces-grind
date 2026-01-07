#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int x, y;
    cin >> x >> y;
    vector<int> arr(y);
    for (int i = 0; i < y; i++){
        cin >> arr[i];
    }
    int l = 1000;
    sort(arr.begin(), arr.end());
    for (int i = 0; i <= y - x ; i++){
        l = min(l, abs(arr[i] - arr[i + x - 1]));
    }
    cout << l<<endl;
}