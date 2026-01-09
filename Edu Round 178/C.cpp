#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> a, b;
    for(ll i=0; i<n; i++){
        if(s[i] == 'A')a.push_back(i+1);
        else b.push_back(i+1);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(n==2){
        if(a[0]==2)cout << "Bob\n";
        else cout << "Alice\n";
    }
    else{
        if(a.size() == 1)cout << "Bob\n";
        else if(b.size()==1){
            cout << "Alice\n";
        }
        else{
            if(a[0] == 1 && a[a.size()-1]==n){
                cout << "Alice\n";
            }
            else if(a[a.size()-1] == n && a[a.size()-2] == n-1){
                cout << "Alice\n";
            }
            else cout << "Bob\n";
        }
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}