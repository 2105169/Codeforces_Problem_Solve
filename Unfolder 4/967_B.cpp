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
    if(n%2==0)cout << -1 << endl;
    else{
        ll a[n];
        a[0] = 1;
        ll k=2;
        for(ll i=2; i<n; i+=2){
            a[i] =k++;

            a[i-1] = k++;
        }
        for(ll i=0; i<n; i++)cout << a[i] << " ";
        cout << endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
