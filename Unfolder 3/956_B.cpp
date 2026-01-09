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
    ll n, m;
    cin>>n>>m;

    ll a[n][m], b[n][m];
    for(ll i=0; i<n; i++){
        string s;
        cin>>s;
        for(ll j=0; j<m; j++){
            a[i][j]=s[j]-48;
        }
    }
    for(ll i=0; i<n; i++){
            string r;
    cin>>r;
        for(ll j=0; j<m; j++){
            b[i][j] = r[j]-48;
        }
    }


    for(ll i=0; i<m-1; i++){
        for(ll j=0; j<n-1; j++){
            if(a[j][i]!=b[j][i]){
                if(a[j][i]<b[j][i]){
                    ll t = b[j][i]-a[j][i];
                    a[j][i] = b[j][i];
                    a[j+1][i+1] += t;
                    a[j+1][i+1] %=3;

                    t = 3-t;
                    a[j+1][i] +=t;
                    a[j+1][i] %=3;
                    a[j][i+1] += t;
                    a[j][i+1] %=3;
                }
                else{
                    ll e = b[j][i]+3;
                    e = e-a[j][i];
                    a[j][i] +=e;
                    a[j][i] %=3;
                    a[j+1][i+1] +=e;
                    a[j+1][i+1] %=3;
                    e = 3-e;

                    a[j+1][i] +=e;
                    a[j+1][i] %=3;
                    a[j][i+1] +=e;
                    a[j][i+1] %=3;
                }
            }
        }
    }

    ll f=1;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(a[i][j]!=b[i][j]){
                f=0;
                break;
            }
        }
        if(f==0){
            break;
        }
    }

    if(f==1)cout << "YES\n";
    else cout << "NO\n";

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
