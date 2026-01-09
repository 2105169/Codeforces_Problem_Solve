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
    string s, t;
    cin>>s;
    cin>>t;
    ll ans=0, k = 0;
    for(ll i=0; i<min(s.size(), t.size()); i++){
        if(s[i]== t[i])k++;
        else break;
    }

    if(k>1){
        ans += k;
        ans++;
        ll a = s.size() - k + t.size() - k;
        ans+=a;
    }
    else{
        ans = s.size() + t.size();
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

