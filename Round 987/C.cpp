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
    ll a[n+1];
    if(n%2==0){
        ll k=1;
        for(ll i=1; i<=n; i++){
            a[i] = k;
            if(i%2==0)k++;
        }
        for(ll i=1; i<=n; i++)cout << a[i] << " ";
        cout << endl;
    }
    else{
        if(n<27){
            cout << -1 << endl;
        }
        else{
            a[1] = 1;
            a[10] = 1;
            a[26] = 1;
            a[11] = 2;
            a[27] = 2;
            ll k=3;
            for(ll i=2; i<=9; i++){
                a[i] = k;
                if(i%2==1){
                    k++;
                }
            }
            for(ll i=12; i<26; i++){
                a[i] = k;
                if(i%2==1){
                    k++;
                }
            }
            for(ll i=28; i<=n; i++){
                a[i] = k;
                if(i%2==1)k++;
            }
            for(ll i=1; i<=n; i++)cout << a[i] << " ";
            cout << endl;
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}