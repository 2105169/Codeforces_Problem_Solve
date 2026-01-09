#include<bits/stdc++.h>

#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[2*n];
    ll x = 0;
    for(ll i=0; i<2*n; i++){
        cin>>a[i];
        if(a[i]==1)
            x++;
    }

    ll mn = x%2;
    ll mx;
    if(x>n){
        mx = 2*n - x;
    }
    else{
        mx = x;
    }

    cout << mn << " " << mx << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}