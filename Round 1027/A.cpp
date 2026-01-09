#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll t = sqrt(n);
    if(t*t==n){
        cout << 0 << " " << t << endl;
    }
    else cout << -1 << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}