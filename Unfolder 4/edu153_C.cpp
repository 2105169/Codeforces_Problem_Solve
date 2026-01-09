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
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];

    ll ans=0;
    ll mn1, mn2;
    if(n==1){
        ans=0;
    }
    else{
            ll index;
        for(ll i=0; i<n-1; i++){
            if(a[i]<a[i+1]){
                mn1=a[i];
                mn2 = a[i+1];
                ans++;
                index = i+1;
                break;
            }
        }

        for(ll i=index+1; i<n; i++){
            if(a[i]<mn1){
                mn1 = a[i];
            }
            else if(a[i]>mn1 && a[i]<mn2){
                ans++;
                mn2 = a[i];
            }
        }
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
