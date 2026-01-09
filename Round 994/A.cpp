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
    ll n;
    cin>>n;
    ll a[n];
    ll x=0, s=0, in = n+1;
    for(ll i=0; i<n; i++)cin>>a[i];
    ll t = 0;

    for(ll i=0; i<n; i++)t+=a[i];

    for(ll i=0; i<n; i++){
        s += a[i];
        if(s>0){
            if(a[i]==0){
                x==1;
                in = i+1;
                break;
            }
        }
    }
    s = 0;
    for(ll i=in; i<n;i++){
        s += a[i];
        if(s>0){
            x=2;
            break;
        }
    }
    if(x==2){
        cout << 2 << endl;
    }
    else if(t==0){
        cout << 0 << endl;
    }
    else cout << 1 << endl;

    

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}