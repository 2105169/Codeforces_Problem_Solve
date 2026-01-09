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
    ll n, m, k;
    cin>>n>>m>>k;
    ll a[n];
    ll j=0;
    for(ll i=n; i>m; i--){
        a[j++]=i;
    }
    for(ll i=1; i<=m; i++){
        a[j++]=i;
    }

    for(ll i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
