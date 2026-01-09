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
    if(abs(n-m)>k || max(n, m)<k)cout << -1 << endl;
    else{
        if(n>m){
            for(ll i=0; i<k; i++){
                cout << 0;
                n--;
            }
            for(ll i=0; i<n; i++){
                cout << "10";
                m--;
            }
            for(ll i=0; i<m; i++) cout << 1;
        }
        else{
            for(ll i=0; i<k; i++){
                cout << 1;
                m--;
            }
            for(ll i=0; i<m; i++){
                cout << "01";
                n--;
            }
            for(ll i=0; i<n; i++)cout << 0;
        }
        cout << endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}