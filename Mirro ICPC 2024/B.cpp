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
    ll a, b;
    cin>>a>>b;
    ll k=1;
    while((k*(k+1))/2<=(a+b)){
        k++;
    }
    k--;
    cout<<k<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}