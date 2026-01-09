#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll a, b, c;
    cin>>a>>b>>c;
    if((a+b+c) % 3==0){
        ll t = (a+b+c)/3;
        if(a<=t && b <= t)cout << "YES\n";
        else cout << "NO\n";
    }
    else
        cout << "NO\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}