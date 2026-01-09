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
    s[n-2] = 'i';
    for(ll i=0; i<n-1; i++)cout << s[i] ;
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}