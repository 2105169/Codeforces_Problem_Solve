#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    string s;
    cin>>s;
    ll f=0;
    deque<char> d;
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='('){
            d.push_back(s[i]);
        }
        else{
            d.pop_back();
        }
        if(d.empty())f++;
    }
    if(f>1)cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}