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
    ll n;
    cin>>n;
    ll a[n+1][n+1];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            char t;
            cin>>t;
            if(t=='0')a[i+1][j+1] = 0;
            else a[i+1][j+1] = 1;
        }
    }

    deque<ll> ans;
    map<ll,ll>mp;

    for(ll i=1; i<=n; i++){
        if(mp[i]==0){
            ans.push_front(i);
            mp[i]++;
        }
        for(ll j=1; j<=n; j++){
            if(a[i][j]==1){
                if(mp[j]==0){
                    ans.push_back(j);
                    mp[j]++;
                }
            }
        }
    }

    for(ll i=0; i<ans.size(); i++)cout << ans[i] << " ";
    cout << endl;


}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}