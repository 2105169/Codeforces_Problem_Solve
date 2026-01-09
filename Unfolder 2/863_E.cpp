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
    vector<ll> a;
    while(n>0){
        a.push_back(n%9);
        n /= 9;
    }

    for(ll i=0; i<a.size(); i++){
        if(a[i]>3)a[i] = a[i]+1;
    }
    for(ll i=a.size()-1; i>=0; i--){
        cout << a[i];
    }
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
