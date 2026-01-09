#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1)cout << 1 << endl;
    else if(n==2)cout << 0 << endl;
    else if(n%2==1){
        ll a[n][26];
        for(ll i=0; i<26; i++)a[0][i] = 0;
        ll k = s[0]-'a';
        a[0][k]++;
        for(ll i=2; i<n; i+=2){
            for(ll j=0; j<26; j++){
                a[i][j] = a[i-2][j];
            }
            k = s[i] - 'a';
            a[i][k]++;
        }

        ll b[n][26];
        for(ll j=0; j<26; j++)b[1][j] = 0;
        k = s[1] - 'a';
        b[1][k]++;
        for(ll i=3; i<n; i+=2){
            for(ll j=0; j<26; j++){
                b[i][j] = b[i-2][j];
            }
            k = s[i] - 'a';
            b[i][k]++;
        }

        ll ans=LLONG_MAX;
        for(ll i=0; i<n; i++){
                ll x, y;
            if(i%2==0){
                if(i==0){
                    x=0, y=0;
                    for(ll j=0; j<26; j++){
                        x = max(x, b[n-2][j]);
                    }
                    ll r=s[0] - 'a';
                    a[n-1][r]--;
                    for(ll j=0; j<26; j++){
                        y = max(y, a[n-1][j]);
                    }
                    a[n-1][r]++;
                    ans = min(ans, n - x - y);
                }
                else{
                    x = 0, y = 0;
                    ll odd[26] = {0};
                    for(ll j=0; j<26; j++){
                        odd[j] = a[i-2][j];
                    }
                    for(ll j=0; j<26; j++){
                        odd[j] += (b[n-2][j]-b[i-1][j]);
                    }
                    for(ll j=0; j<26; j++){
                        x = max(x, odd[j]);
                    }
                    ll even[26] = {0};
                    for(ll j=0; j<26; j++){
                        even[j] = b[i-1][j];
                    }
                    for(ll j=0; j<26; j++){
                        even[j] += (a[n-1][j]-a[i][j]);
                    }
                    for(ll j=0; j<26; j++){
                        y = max(y, even[j]);
                    }
                    ans = min(ans, n-x-y);
                }
            }
            else{
                x = 0, y = 0;
                if(i==1){
                    ll odd[26] = {0};
                    for(ll j=0; j<26; j++){
                        odd[j] = a[0][j];
                    }
                    for(ll j=0; j<26; j++){
                        odd[j] += (b[n-2][j] - b[i][j]);
                    }
                    for(ll j=0; j<26; j++){
                        x = max(x, odd[j]);
                    }
                    ll even[26];
                    for(ll j=0; j<26; j++){
                        even[j] = a[n-1][j]-a[0][j];
                    }
                    for(ll j=0; j<26; j++){
                        y = max(y, even[j]);
                    }
                    ans = min(ans, n-x-y);
                }
                else{
                    ll odd[26], even[26];
                    for(ll j=0; j<26; j++){
                        odd[j] = a[i-1][j];
                    }
                    for(ll j=0; j<26; j++){
                        odd[j] += (b[n-2][j]-b[i][j]);
                    }
                    for(ll j=0; j<26; j++){
                        even[j] = b[i-2][j];
                    }
                    for(ll j=0; j<26; j++){
                        even[j] += (a[n-1][j]-a[i-1][j]);
                    }
                    for(ll j=0; j<26; j++){
                        x = max(x, odd[j]);
                        y = max(y, even[j]);
                    }
                    ans = min(ans, n-x-y);
                }
            }
        }
        cout << ans << endl;
    }
    else{
        map<ll, ll> odd, even;
        for(ll i=0; i<s.size(); i+=2){
            ll j = s[i]- 'a';
            odd[j]++;
        }
        for(ll i=1; i<s.size(); i+=2){
            ll j= s[i] - 'a';
            even[j]++;
        }
        ll x = 0, y = 0;
        for(ll i=0; i<26; i++){
            x = max(x, odd[i]);
            y = max(y, even[i]);
        }
        cout << n - x - y << endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
