#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll a, b, c, d;
    cin>>a>>b>>c>>d;
    ll l = min(a, c), r = min(b, d);
    if(l==r){
        cout << "Gellyfish" << endl;
    }
    else{
        if(l<r){
            cout << "Flower" << endl;
        }
        else cout << "Gellyfish" << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}