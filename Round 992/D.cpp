#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
#define N 200005
using namespace std;

vector<ll> vt[N];
ll total;
ll a[N];

bool isPrime(ll m)
{
    if(m<=1)return false;
    for(ll i = 2; i<=sqrt(m); i++){
        if(m % i == 0)return false;
    }
    return true;
}


void DFS(int u)
{
    for(auto v: vt[u]){
        if(a[v]>0)continue;
        total++;
        while(isPrime(total-a[u])){
            total++;
        }
        a[v] = total;
        DFS(v);
    }
}


void solve()
{
    ll n;
    cin>>n;
    for(ll i=1; i<n; i++){
        ll u, v;
        cin>>u>>v;
        vt[u].emplace_back(v);
        vt[v].emplace_back(u);
    }

    total = 1;
    a[1] = 1;
    DFS(1);

    for(ll i=1; i<=n; i++)cout << a[i] << " ";
    cout << endl;
    for(ll i=1; i<=n; i++){
        vt[i].clear();
        a[i] = 0;
    }


}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}