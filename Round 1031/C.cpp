#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, m, k;
    cin>>n>>m>>k;
    k--;
    ll a[n+1][m+1], ans=0;
    char x;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            cin>>x;
            if(x=='.'){
                a[i][j] = 1;
            }
            else if(x=='g'){
                a[i][j] = 2;
                ans++;
            }
            else{
                a[i][j] = 3;
            }
        }
    }

    ll c[n+1][m+1] = {0};
    ll t=0;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            c[i][j] = c[i-1][j] + c[i][j-1] - c[i-1][j-1] + (a[i][j] == 2);
        }
    }

    ll sum=0;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            if(a[i][j] == 1){
               ll lx = max(i-k, 1LL)-1, ly = max(j-k, 1LL)-1;
               ll rx = min(i+k, n), ry=min(j+k, m);
                ll s =ans - c[rx][ry] - c[lx][ly] + c[lx][ry] + c[rx][ly];
                sum = max(sum, s);
            }
        }
    }

    cout << sum << endl;

}

int main()
{
    int t;cin>>t;while(t--)solve();
}



