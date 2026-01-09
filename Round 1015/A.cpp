#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    if(n%2==0){
        cout << -1 << endl;
    }
    else{
        cout << n << " ";
        for(ll i=1; i<n; i++)cout << i << " ";
        cout << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}