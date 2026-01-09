#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;

void solve()
{
    ll l, r, k;
    cin>>l>>r>>k;
    ll rr = r/k;
    ll ans;
    if(rr>=l){
        cout << rr-l + 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}