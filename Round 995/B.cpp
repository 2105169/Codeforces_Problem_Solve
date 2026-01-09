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
    ll n, a, b, c;
    cin>>n>>a>>b>>c;

    ll ans=0;
    ll x = a+b+c;
    ans = n/x;
    ll f = ans * x;
    ans *= 3;
    if(f>=n){
        cout << ans <<endl;
    }
    else if(f + a >= n){
        cout << ans + 1 << endl;
    }
    else if(f+a+b>=n){
        cout << ans + 2 << endl;
    }
    else cout << ans + 3 << endl;
    
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}