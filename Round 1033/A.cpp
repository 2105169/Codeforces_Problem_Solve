#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll a, b, c, d, e, f;
    cin>>a>>b>>c>>d>>e>>f;
    ll n=0;
    if(a>b){
        if(a==c && a==e && a==b+d+f)n=1;
        if(c+e==a && d==f && d+b == a)n=1;
    }
    else{
        if(e==c && d+f == b && a+c==b)n = 1;
        if(b == d && b==f && a+c+e == b)n=1;
    }
    if(n==1)cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}