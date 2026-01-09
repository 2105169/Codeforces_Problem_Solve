#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    string s, t;
    cin>>s;
    cin>>t;

    ll a[n+1], b[n+1];
    for(ll i=1; i<=n; i++){
        if(s[i-1]=='B')a[i] = 1;
        else a[i] = 0;

        if(t[i-1]=='B')b[i] = 1;
        else b[i] = 0;
    }

    ll i=0, j=0;
    for(ll k=1; k<=n; k++){
        if(a[k]==0){
            i=2;
            j = k;
            break;
        }
        if(b[k]==0){
            i = 1;
            j = k;
            break;
        }
    }

    if(j==0 || j==n)cout << "YES\n";
    else{
        ll f=0;
        while(j<n){
            if(i==1){
                if(a[j+1]==0){
                    f++;
                    break;
                }
                if(b[j+1]==1){
                    i=2;
                }
                j++;
            }
            else{
                if(b[j+1]==0){
                    f++;
                    break;
                }
                if(a[j+1]==1){
                    i=1;
                }
                j++;
            }
        }

        if(f==0)cout << "YES\n";
        else cout << "NO\n";
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}