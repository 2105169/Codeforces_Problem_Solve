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
    ll n, m, a;
    cin>>n>>m>>a;
    ll w, l;
    l = n/a;
    if(n%a>0){
        l++;
    }

    w = m/a;
    if(m%a>0)w++;
    cout << l*w <<endl;
}


int main()
{
    int t;
    t=1;
    while(t--)solve();
}

