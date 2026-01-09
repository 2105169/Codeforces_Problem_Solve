#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    double a, b, x, y;
    cin>>a>>b>>x>>y;
    double d = sqrt((a-x)*(a-x) + (b-y)*(b-y));
    double f[n];
    for(ll i=0; i<n; i++)cin>>f[i];
    ll ans=0;

    if(n==1){
        if(d==f[0]){
            ans=1;
        }
        else ans=0;
    }
    else if(n==2){
        if(abs(f[0]-f[1])<=d && f[0]+f[1]>=d){
            ans = 1;
        }
        else ans = 0;
    }
    else{
        double dd = 0;
        for(ll i=0; i<n; i++)dd += f[i];
        double mx = -1.0;
        for(ll i=0; i<n; i++)mx = max(mx, f[i]);

        if(dd>=d && mx <= dd-mx + d)ans=1;
        else ans = 0;
    }
    if(ans)cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}