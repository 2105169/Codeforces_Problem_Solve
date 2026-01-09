#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;


ll go(ll g)
{
    ll s = g;

    ll f = 0;
    while(s>0)
    {
        f+=(s%10);
        s /= 10;
    }
    return f;
}


void solve()
{
    ll n, k;
    cin>>n>>k;
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    ll b[n+1];
    for(ll i=1; i<=n; i++)
    {
        ll x = a[i];
        b[i] = go(x);
    }
    ll c[n+1];
    for(ll i=1; i<=n; i++)
    {
        ll x = b[i];
        c[i] = go(x);
    }


    ll ans[n+1] = {0};
    ll cn[n+1] = {0};
    ll turn[n+1] = {0};
    for(ll i=0; i<=n; i++)turn[i] = i;

    set<ll> st;
    for(ll i=1; i<=n; i++)st.insert(i);

    for(ll i=0; i<k; i++)
    {
        ll t;
        cin>>t;
        if(t==1)
        {
            ll l, r;
            cin>>l>>r;
            if(st.empty())continue;
            vector<ll> del;
            auto it = st.lower_bound(l);
            while(it != st.end() && (*it) <= r)
            {
                a[(*it)] = go(a[(*it)]);
                if(a[(*it)]<10)del.push_back((*it));
                it++;
            }
            if(!del.empty())
            {
                for(ll h=0; h<del.size(); h++)
                {
                    st.erase(st.find(del[h]));
                }
            }
        }
        else
        {
            ll x;
            cin>>x;
            if(cn[x]==0)cout << a[x] << endl;
            else if(cn[x]==1) cout << b[x] << endl;
            else cout << c[x] << endl;
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}


