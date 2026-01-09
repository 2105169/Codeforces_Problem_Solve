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
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll mn = LLONG_MAX, mx = LLONG_MIN, sum=0;
    for(ll i=0; i<n; i++){
        sum +=a[i];
        mn = min(mn, sum/(i+1));
    }
    sum = 0;
    ll k=0;
    for(ll i=n-1; i>=0; i--){
        sum +=a[i];
        k++;
        mx = max(mx, (sum+k-1)/(k));
    }
    cout << mx-mn << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

