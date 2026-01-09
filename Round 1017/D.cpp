#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    string p, s;
    cin>>p;
    cin>>s;
    vector<ll> a, b;
    ll n=1;
    string f, g;
    for(ll i=0; i<p.size()-1; i++){
        if(p[i]==p[i+1])n++;
        else{
            f+=p[i];
            a.push_back(n);
            n=1;
        }
    }
    f+=p[p.size()-1];
    a.push_back(n);
    

    n=1;
    for(ll i=0; i<s.size()-1; i++){
        if(s[i] == s[i+1])n++;
        else{
            b.push_back(n);
            g.push_back(s[i]);
            n=1;
        }
    }
    g.push_back(s[s.size()-1]);
    b.push_back(n);

    if(a.size() != b.size())cout << "NO\n";
    else{
        ll t=0;
        for(int i=0; i<a.size(); i++){
            if(a[i]*2>=b[i] && a[i] <= b[i] && (f[i] == g[i])){
                continue;
            }
            else{
                t++;
            }
        }
        if(t==0)cout << "YES\n";
        else cout << "NO\n";
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}