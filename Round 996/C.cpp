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
    ll n, m;
    cin>>n>>m;
    string s;
    cin>>s;
    ll a[n+1][m+1];
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }

    ll col[m+1]={0}, row[n+1] = {0};

    for(ll i=1; i<=m; i++){
        ll ss = 0;
        for(ll j=1; j<=n; j++){
            ss+=a[j][i];
        }
        col[i] = ss;
    }

    for(ll i=1; i<=n; i++){
        ll ss=0;
        for(ll j=1; j<=m; j++){
            ss+=a[i][j];
        }
        row[i] = ss;
    }

    ll c = 1, r = 1;

    for(ll i=0; i<s.size(); i++){
        if(s[i]=='D'){
            a[r][c] = -row[r];
            col[c] -= row[r];
            r++;
        }
        else{
            a[r][c] = -col[c];
            row[r] -= col[c];
            c++;
        }
    }

    if(s[s.size()-1]=='D'){
        a[n][m] = -col[c];
    }
    else{
        a[n][m] = -row[r];
    }

    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}