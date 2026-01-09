#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll pre[n], post[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    pre[0] = a[0];
    for(ll i=1; i<n; i++){
        pre[i] = min(a[i], pre[i-1]);
    }
    post[n-1] = a[n-1];
    for(ll i=n-2; i>=0; i--){
        post[i] = max(post[i+1], a[i]);
    }

    for(ll i=0; i<n; i++){
        if(i==0 || i==n-1){
            cout << 1;
        }
        else{
            if(pre[i-1]<a[i] && a[i]<post[i+1]){
                cout << 0;
            }
            else cout << 1;
        }
    }
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}