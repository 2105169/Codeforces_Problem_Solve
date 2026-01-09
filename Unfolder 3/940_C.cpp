#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;
ll mod =1e9+7;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll cnt = 0;
    for(ll i=0; i<k; i++){
        ll a, b;
        cin>>a>>b;
        if(a==b)cnt++;
        else cnt += 2;
    }
    ll row = n-cnt;

    ll dp[row+1];
    dp[0]=1;
    dp[1] = 1;
    for(ll i=2; i<=row; i++){
        dp[i] = (dp[i-1] + dp[i-2]*2*(i-1))%mod;
    }
    cout << dp[row] << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
