#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long



void solve()
{
    ll n;
    cin>>n;
    ll a=1, b = n/2 + 1, c=n;
    ll q;
    cout << "? " << a << " " << b << " " << c << endl;
    cin>>q;
    while(q != 0){
        a = b;
        b = c;
        c = q;
        cout << "? " << a << " " << b <<" " << c <<endl;
        cin>>q;
    }
    cout << "! " << a << " " << b << " " << c << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}