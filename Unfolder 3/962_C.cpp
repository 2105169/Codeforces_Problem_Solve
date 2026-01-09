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
    ll n, q;
    cin>>n>>q;
    char a[n], b[n];



    ll p1[n+1][26]={0};
    ll p2[n+1][26]={0};

    for(ll i=1; i<=n; i++){
        char c;
        cin>>c;
        ll t=c-'a';
        p1[i][t]++;
        for(ll j=0; j<26; j++){
            p1[i][j] += p1[i-1][j];
        }
    }

    for(ll i=1; i<=n; i++){
        char c;
        cin>>c;
        ll t=c- 'a';
        p2[i][t]++;
        for(ll j=0; j<26; j++){
            p2[i][j] += p2[i-1][j];
        }
    }

    for(ll i=0; i<q; i++){
        ll x=0;
        ll l, r;
        cin>>l>>r;
        for(ll j=0; j<26; j++){
            ll f=min(p1[r][j]-p1[l-1][j], p2[r][j]-p2[l-1][j]);
            x+=f;
        }
        cout << r-l+1-x << endl;
    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

