#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<n; i++)cin>>b[i];

    ll k=0;
    vector<pair<ll,ll>> vt;
    for(ll i=0; i<n-1; i++){
       
        ll f2 = i+1;
        for(ll j=i+2; j<n; j++){
            if(a[f2]==a[j]){
                if(b[f2]>b[j]){
                    f2 = j;
                }
            }
            else if(a[f2]>a[j]){
                f2 = j;
            }
        }

        if(a[i]==a[f2]){
            if(b[i]>b[f2]){
                k++;
                vt.push_back(make_pair(i, f2));
                swap(a[i], a[f2]);
                swap(b[i], b[f2]);
            }
        }
        else if(a[i]>a[f2]){
            k++;
            vt.push_back(make_pair(i, f2));
            swap(a[i], a[f2]);
            swap(b[i], b[f2]);
        }
    }

    ll c=0;
    for(ll i=0; i<n-1; i++){
        if(a[i+1]<a[i])c++;
        if(b[i+1]<b[i])c++;
    }

    

    if(c>0)cout << -1 << endl;
    else{
        cout << k << endl;
        for(ll i=0; i<k; i++){
            cout << vt[i].first+1 << " " << vt[i].second+1 << endl;
        }
        cout << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}