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
    ll q;
    cin>>q;
    ll a[26]= {0}, b[26]= {0};
    a[0]++;
    b[0]++;
    ll mn=0, mx=0;
    for(ll i=0; i<q; i++)
    {
        ll d, k;
        cin>>d>>k;
        string s;
        cin>>s;
        if(d==1)
        {
            for(ll j=0; j<s.size(); j++)
            {
                ll t=s[j]- 'a';
                a[t] += k;
            }
            if(mx>mn)cout << "YES\n";
            else{
                if(a[0]<b[0]){
                    ll x=0;
                    for(ll j=1; j<26; j++)x+=a[j];
                    if(x==0)cout << "YES\n";
                    else cout << "NO\n";
                }
                else cout << "NO\n";
            }
        }
        else
        {
            for(ll j=0; j<s.size(); j++)
            {
                ll t = s[j] - 'a';
                b[t] += k;
                if(t>mx) mx = t;
            }
            if(mn<mx)cout << "YES\n";
            else{
                if(a[0]<b[0]){
                    ll x=0;
                    for(ll j=1; j<26; j++)x+=a[j];
                    if(x==0)cout << "YES\n";
                    else cout << "NO\n";
                }
                else cout << "NO\n";
            }
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
