#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, x;
    cin>>n>>x;
    ll a[n];
    if(n==x){
        a[n-1] = x-1;
    }
    else{
        a[n-1] = x;
    }
    ll f = 0;
    for(ll i=0; i<n-1; i++){
        if(f==x){
            f++;
        }
        a[i] = f;
        f++;
    }
    for(ll i=0; i<n; i++)cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}