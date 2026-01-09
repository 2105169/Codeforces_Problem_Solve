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
    ll n, k;
    cin>>n>>k;
    char a[n][n];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin>>a[i][j];
        }
    }


    for(ll i=0; i<n; i+=k){
        for(ll j=0; j<n; j+=k){
            cout << a[i][j];
        }
        cout << endl;
    }
    //cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
