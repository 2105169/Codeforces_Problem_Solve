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
    ll n, m, k;
    cin>>n>>m>>k;
    ll a[n+2][m + 2];
    for(ll i=0; i<n+2; i++){
        for(ll j=0; j<m+2; j++){
            a[i][j] = LLONG_MAX;
        }
    }
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    ll ans=0;
    ll r=0, c=0, t = LLONG_MAX, index;
    for(ll i=0; i<m; i++){
        if(a[0][i] + i*k < t){
            index = i;
            t = a[0][i] + i*k;
        }
    }
    ans += t;
    ll s=1;
    
    
    for(ll i=0; i<n+m-2; i++){
        cout << index << " ";
        t = a[r][(index+1)%m];
        if(s==1)
            r++;

        ll index2 = index, v = t;
        for(ll j=0; j<m; j++){
            ll x = (j+index) % m;
            ll f = a[r][x] + j*k;
            if(f<v){
                index2 = x;
                v = f;
            }
        }
        if(v==t){
            ans += v;
            index++;
            s=0;
        }
        else{
            ans += v;
            index = index2;
            s = 1;
        }
        
    }
    cout << endl;
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}