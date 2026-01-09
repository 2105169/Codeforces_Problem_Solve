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
    ll a[n], b[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<n; i++)cin>>b[i];

    ll al=0, ar=n-1, bl=0, br=n-1;
    ll f=0;
    for(ll i=0; i<n-1; i++){
        if(a[al]==b[bl] && a[ar]==b[br]){
            a[al]=0;
            b[bl]=0;
            al++;
            bl++;
        }
        else if(a[al]==b[br] && a[ar]==b[bl]){
            a[al]=0;
            b[br]=0;
            al++;
            br--;
        }
        else{
            f++;
        }
    }
    if(f==0){
        cout << "Bob" << endl;
    }
    else cout << "Alice" << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
