#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    string s, t;
    cin>>s;
    cin>>t;

    ll x = 0, ans1, ans2;
    for(ll i=0; i<n; i++){
        if(s[i]!=t[i])x++;
    }

    if(x%2==0){
        ans1 = x*2;
    }
    else ans1 = x*2-1;

    ll y=0;
    for(ll i=0; i<n; i++){
        if(s[i] != t[n-i-1])y++;
    }

    if(y%2==1){
        ans2 = y*2;
    }
    else{
        ans2 = max(2LL, 2*y-1);
    }

    cout << min(ans1, ans2) << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}