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
    ll s = n-k+1;
    ll t;
    if(k%2==0){
        t = k/2;
    }
    else{
        if(n%2==0){
            t = k/2;
        }
        else{
            t = k/2+1;
        }
    }
    if(t%2==0)cout << "YES\n";
    else cout << "NO\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
