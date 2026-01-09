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
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];

    ll mn1 = LLONG_MAX, mn2 = LLONG_MAX;
    vector<ll> vt;
    map<ll,ll>mp, mp2;

    for(ll i=0; i<n; i++){
        mp[a[i]]++;
        if(mp[a[i]]>1 && mp2[a[i]]==0){
            vt.push_back(a[i]);
            mp2[a[i]]++;
        }
    }
    

    if(vt.size()>1){
        cout << vt[0] << " " << vt[0] <<  " " << vt[1] << " " << vt[1] << endl;
    }
    else if(vt.size()==1){
            ll x=0, y=0;
            vector<ll> b;
            for(ll i=0; i<n; i++){

                if(vt[0] == a[i]){
                    y++;
                    if(y>2)b.push_back(a[i]);
                }
                else b.push_back(a[i]);
            }
            sort(b.begin(), b.end());

            for(ll i=0; i<b.size()-1; i++){
                if(b[i+1]-b[i] < 2*vt[0]){
                    x=1;
                    cout << vt[0] << " " << vt[0] << " " << b[i] << " " << b[i+1] << endl;
                    break;
                }
            }
            if(x==0)cout << -1 << endl;
        }
    else{
        cout << -1 << endl;
    }

 
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}