
#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    int n;
    cin>>n;
    int a[n], b[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<n; i++)cin>>b[i];

    ll ans=1;
    if(a[n-1]==b[n-1]){
        for(ll i=n-2; i>=0; i--){
            if(a[i]==b[i]){

            }
            else if(b[i] == (a[i] ^ a[i+1])){

            }
            else if(b[i] == (a[i] ^ b[i+1])){

            }
            else{
                ans = 0;
            }
        }
    }
    else{
        ans = 0;
    }

    if(ans)cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
