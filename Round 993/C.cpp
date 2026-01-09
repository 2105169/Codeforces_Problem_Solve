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
    ll m, a, b, c;
    cin>>m>>a>>b>>c;
    ll khali = 0;
    ll ans=0;
    if(m>=a){
        ans+=a;
        khali += (m-a);
    }
    else{
        ans += m;
    }

    if(m>=b){
        ans += b;
        khali += (m-b);
    }
    else{
        ans+=m;
    }

    if(khali>=c)ans+=c;
    else ans += khali;
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}