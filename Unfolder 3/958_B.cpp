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
    string s;
    cin>>s;
    vector<ll> t;

    for(ll i=0; i<n; i++){
        if(s[i]=='1'){
            t.push_back(1);
        }
        else if(s[i]=='0'){
            t.push_back(0);
            for(ll j=i; j<n; j++){
                if(s[j]=='0'){
                    s[j] = '5';
                }
                else{
                    break;
                }
            }
        }
    }

    ll l=0, r=0;
    for(ll i=0; i<t.size(); i++){
        if(t[i]==1)l++;
        else r++;
    }

    if(l>r)cout << "YES\n";
    else cout << "NO\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
