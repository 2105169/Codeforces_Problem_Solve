#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll t=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='1')t++;
    }
    if(t>k){
        if(n<k*2){
            cout << "Alice\n";
        }
        else{
            cout << "Bob\n";
        }
    }
    else{
        cout << "Alice\n";
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}