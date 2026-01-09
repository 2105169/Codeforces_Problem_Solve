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

ll mex(ll a, ll b){
    if(a!=0 && b!=0)return 0;
    else if(a!=1 && b!=1)return 1;
    else return 2;
}

ll mex2(ll a, ll b, ll c)
{
    if(a!=0 && b!=0 && c!=0)return 0;
    else if(a!=1 && b!=1 && c!=1)return 1;
    else if(a!=2 && b!=2 && c!=2)return 2;
    else return 3;
}

void solve()
{
    ll n, x, y;
    cin>>n>>x>>y;

    ll a[n+1];
    for(ll i=0; i<=n; i++)a[i] = 100;
    x--, y--;
    a[x] = 1;
    a[y] = 2;

    for(ll i=0; i<n; i++){
            if(i != x && i!=y){
                ll c, d;
                if(i==0)c = a[n-1];
                else c = a[i-1];
                if(i==n-1)d = a[0];
                else d=a[i+1];
                a[i] = mex(c, d);   
            }
    }

    ll c, d, e;
    if(x==0)c=a[n-1];
    else c = a[x-1];
    d = a[x+1];
    e = a[y];
    a[x] = mex2(c, d, e);

    c=a[y-1];
    d = a[x];
    if(y==n-1)e = a[0];
    else e = a[y+1];
    a[y] = mex2(c, d, e);

    for(ll i=0; i<n; i++){
            if(i!=x && y!=i){
                ll f, g;
                if(i==0)f = a[n-1];
                else f = a[i-1];
                if(i==n-1)g = a[0];
                else g=a[i+1];
                a[i] = mex(f, g);   
            }
    }

    for(ll i=0; i<n; i++)cout << a[i] << " ";
    cout << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}