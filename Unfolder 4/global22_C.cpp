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
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll odd = 0, even=0;
    for(ll i=0; i<n; i++)
    {
        if(a[i]%2==1)odd++;
        else even++;
    }

    if(odd%4==2)cout << "Bob\n";
    else if(odd%4==3) cout << "Alice\n";
    else if(odd%4==0)cout << "Alice\n";
    else if(even%2==1) cout << "Alice\n";
    else cout << "Bob\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

