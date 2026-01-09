
#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++){
        if(i%2==0){
            a[i] = -1;
        }
        else{
            a[i] = 3;
        }
    }
    if(n%2==0){
        a[n-1] = 2;
    }
    for(ll i=0; i<n; i++)cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
