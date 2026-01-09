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
    char a[n][4];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<4; j++){
            cin>>a[i][j];
        }
    }
    vector<ll> v;
    for(ll i=n-1; i>=0; i--){
        for(ll j=0; j<4; j++){
            if(a[i][j]=='#'){
                v.push_back(j+1);
                break;
            }
        }
    }
    for(ll i=0; i<n; i++)cout << v[i] << " ";
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
