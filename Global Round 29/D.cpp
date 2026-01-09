
#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long



void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    map<ll, ll> mp;
    vector<ll> vt;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(mp[a[i]]==0){
            vt.push_back(a[i]);
        }
        mp[a[i]]++;
    }

    vector<pair<ll,ll>> v;
    for(ll i=0; i<vt.size(); i++){
        v.push_back({mp[vt[i]], vt[i]});
    }

    sort(v.begin(), v.end());

    ll aa=0, bb=0;

    ll al=1;
    for(ll i=v.size()-1; i>=0; i--){
        if(v[i].second % 2==0){
            ll t = v[i].second/2;
            aa += t*v[i].first;
            bb += t*v[i].first;
        }
        else{
           //cout << "first: "<< v[i].first << " " << endl;
            if(al==1){
                al = 0;
                ll t = (v[i].second+1)/2;
                aa += (t*v[i].first);
                bb += ((t-1)*v[i].first);
            }
            else{
                al = 1;
                ll t = (v[i].second + 1)/2;
                bb += (t*v[i].first);
                aa += ((t-1)*v[i].first);
            }
        }
    }
    cout << aa << " " << bb << endl;
    //for(ll i=0; i<v.size(); i++)cout << v[i].first << " " << v[i].second << endl;
    
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
