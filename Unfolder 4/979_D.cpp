#include<bits/stdc++.h>
#define gcd __gcd
#define ll long long
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    ll a[n+1];
    for(ll i = 1; i <= n; i++) cin >> a[i];
    string s;
    cin >> s;
    char x[n+1];
    for(ll i=n; i>0; i--){
        x[i] = s[i-1];
    }
    ll cnt = 0;
    ll pre[n+1]={0};

    for(ll i=1; i<=n; i++){
        pre[i] = pre[i-1] + a[i];
    }
    ll sum[n+1]={0};
    for(ll i=1; i<=n; i++){
        sum[i] = sum[i-1] + i;
    }



    for(ll i=2; i<=n; i++){

        if(x[i]=='L' && x[i+1]=='R' && pre[i]> sum[i]){
            cnt++;
        }
    }

    for(ll i=0; i<k; i++){
        ll f;
        cin>>f;
        if(x[f]=='L'){
            x[f] = 'R';
            if(x[f+1]=='R' && pre[f]>sum[f]){
                cnt--;
            }

            f--;
            if(x[f]=='L' && pre[f]>sum[f])cnt++;
        }
        else {
            x[f] = 'L';
            if(x[f-1]=='L' && pre[f-1]>sum[f-1])cnt--;
            if(x[f+1]=='R' && pre[f]>sum[f])cnt++;
        }




        if(cnt>0)cout << "NO\n";
        else cout << "YES\n";
    }


}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
