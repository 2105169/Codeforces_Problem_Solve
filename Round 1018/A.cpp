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
    ll l=1, r = n;
    ll ss=0;
    vector<ll> vt;
    for(ll i = n-2; i>=0; i--){
        if(s[i] =='>'){
            vt.push_back(r);
            ss+=r;
            r--;

        }
        else{
            vt.push_back(l);
            ss += l;
            l++;
        }
    }
    cout << (n*(n+1)/2) - ss <<" ";
    for(ll i=vt.size()-1; i>=0; i--)cout << vt[i] << " ";
    cout << endl;

}

int main()
{
    int t;cin>>t;while(t--)solve();
}