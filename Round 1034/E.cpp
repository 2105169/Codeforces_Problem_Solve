#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+10;
ll a[N], b[N], c[N];
int main()
{
    int t;cin>>t;while(t--){
        ll n;
        cin>>n;
        for(ll i=0; i<=n; i++){
            a[i] = b[i] = c[i] = 0;
        }

        for(ll i=0; i<n; i++)cin>>a[i], b[a[i]]++;

        for(ll i=0; i<=n; i++){
            c[b[i]]++;
            c[n+1-i]--;
            if(b[i]==0)break;
        }
        ll ans=0;
        for(ll i=0; i<=n; i++){
            ans += c[i];
            cout << ans << " ";
        }
        cout << endl;

    }
}