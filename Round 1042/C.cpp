
#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, k;
    cin>>n>>k;
    deque<ll> a, b;
    map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        ll x;

        cin>>x;
         x = x%k;
        a.push_back(x);
    }
    ll mx = 0;
    for(ll i=0; i<n; i++){
        ll y;
        cin>>y;
        y = y % k;
        b.push_back(y);
        mp[y]++;

    }

    for(ll i=0; i<n; i++){
        if(mp[a[i]]>0){
            mp[a[i]]--;
        }
        else{
            a[i] = abs(a[i] - k);
            if(mp[a[i]]>0){
                mp[a[i]]--;
            }
            else{
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
