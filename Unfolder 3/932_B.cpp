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
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];

    map<ll, ll> mxl, mxr;
    ll mx=0;
    vector<ll> mx1, mx2;
    for(ll i=0; i<n; i++){
        mxl[a[i]]++;
        if(mxl[mx]==0){
            mx1.push_back(mx);
        }
        else{
            for(ll j=mx+1; j<=i+2; j++){
                if(mxl[j]==0){
                    mx1.push_back(j);
                    mx = j;
                    break;
                }
            }
        }
    }

    mx = 0;
    ll t = 1;
    for(ll i=n-1; i>=0; i--){
        t++;
        mxr[a[i]]++;
        if(mxr[mx]==0){
            mx2.push_back(mx);
        }
        else{
            for(ll j=mx+1; j<=t; j++){
                if(mxr[j]==0){
                    mx = j;
                    mx2.push_back(mx);
                    break;
                }
            }
        }
    }

    ll f=0;
    ll l, r;
    for(ll i=0; i<n-1; i++){
        if(mx1[i] == mx2[n-i-2]){
            f=1;
            l = i;
            r = i+1;
            break;
        }
    }
    if(f==0)cout << -1 << endl;
    else {
        cout << 2 << endl;
        cout << 1 << " " << l+1 << endl;
        cout << r+1 << " " << n << endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
