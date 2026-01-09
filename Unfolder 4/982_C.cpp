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
    ll a[n+1];
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    ll k = 1;
    for(ll i=n; i>=1; i--){
        if(a[i]==k){
            k += (i-1);
        }
        k++;
    }
    k--;
    cout << k << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

