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

const ll N = 200005;
vector<ll> e[N];
ll v[N], id;
void solve(ll x)
{
    id++;
    for(ll y: e[x]) solve(y);
    v[id] = id;
}


int main()
{
    
}