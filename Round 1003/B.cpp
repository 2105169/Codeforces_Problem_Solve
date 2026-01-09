#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

void solve()
{
    string s;
    cin>>s;
    ll n = s.size();
    ll x = 0 ;
    for(ll i=n-1; i>0; i--){
        if(s[i]==s[i-1]){
            x = i;
            break;
        }
    }

    if(x==0)cout << n << endl;
    else cout << 1 << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}