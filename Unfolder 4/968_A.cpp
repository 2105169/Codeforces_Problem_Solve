#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0] != s[n-1]){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
