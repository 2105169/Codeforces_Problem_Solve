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
    if(n>4){
            cout << 1 << " " << 3 << " ";
            for(ll i=7; i<=n; i+=2)cout << i << " ";
            cout << 5 << " " << 4 << " 2" << " ";
            for(ll i=6; i<=n; i+=2)cout << i << " ";
            cout << endl;
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