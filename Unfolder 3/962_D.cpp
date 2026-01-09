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
    ll n, x;
    cin>>n>>x;
    ll ans=0;
    for(ll a=1; a<=min(n, x); a++){
        for(ll b=1; b<=min(n, x); b++)
            {
                if(a*b>n || a+b>x)break;
                else{
                    ans += min((n-a*b)/(a+b), x-a-b);
                }
            }
    }

    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}


