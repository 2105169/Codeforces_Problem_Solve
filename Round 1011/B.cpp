#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    ll z = 0;
    for(ll i=1; i<=n; i++){
        if(a[i]==0)z++;
    }

    if(z==0){
        cout <<1  << endl;
        cout << 1 << " " << n << endl;
    }
    else{
        if(a[1] != 0){
            cout << 2 << endl;
            cout << 2 << " " << n << endl;
            cout << 1 << " " << 2 << endl;
        }
        else if(a[n] != 0){
            cout << 2 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << 1 << " " << 2 << endl;
        }
        else{
            cout << 3 << endl;
            cout << 3 << " " << n << endl;
            cout << 1 << " " << 2 << endl;
            cout << 1 << " " << 2 << endl;
        }
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}