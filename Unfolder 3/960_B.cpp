#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

void solve()
{
    ll n, x, y;
    cin>>n>>x>>y;
    ll a[n+1];

    for(ll i=y; i<=x; i++)a[i]=1;

    ll f=0;
    for(ll i=x+1; i<=n; i++){
        if(f==0){
            a[i]=-1;
            f=1;
        }
        else{
            a[i]=1;
            f=0;
        }
    }
    f=0;
    for(ll i=y-1; i>=0; i--){
        if(f==0){
            a[i]=-1;
            f=1;
        }
        else{
            a[i]=1;
            f=0;
        }
    }

    for(ll i=1; i<=n; i++)cout << a[i] << " ";
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
