#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define f(i,x,y) for(ll i=x; i<y; i++)
#define cf(i,x,y) for(ll i=x, i<=y; i++)
#define rf(i,x,y) for(ll i=x-1; i>=y; i--)
#define endl '\n'


int main(){

    vector<char> arr1={'q','w','e','r','t','y','u','i','o','p'};
    vector<char> arr2={'a','s','d','f','g','h','j','k','l',';'};
    vector<char> arr3={'z','x','c','v','b','n','m',',','.','/'};

    // string e

    char x;
    cin>>x;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        for(int j=0; j<10; j++){
            if(s[i]==arr1[j]){
                if(x=='R'){
                    s[i]=arr1[j-1];
                }else{
                    s[i]=arr1[j+1];
                }
                break;
            }else if(s[i]==arr2[j]){
                if(x=='R'){
                    s[i]=arr2[j-1];
                }else{
                    s[i]=arr2[j+1];
                }
                break;
            }else if(s[i]==arr3[j]){
                if(x=='R'){
                    s[i]=arr3[j-1];
                }else{
                    s[i]=arr3[j+1];
                }
                break;
            }
        }
    }
    cout<<s<<endl;
}


