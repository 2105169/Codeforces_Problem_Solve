#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n;
    cin>>n;
    char a[n];
    map<char, ll> mp;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }

    ll k=0;
    while(1){
        for(ll i=0; i<26; i++){
            if(k==n){
                break;
            }
            char x= i + 'a';
            if(mp[x]>0){
                cout << x;
                k++;
                mp[x]--;
            }
        }
        if(k==n)break;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
