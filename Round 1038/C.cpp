#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

array<int, 3> p[200005];

bool cmp(array<int, 3>a, array<int, 3>b){
    return a[1]< b[1];
}

void solve()
{
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>p[i][0]>>p[i][1];
        p[i][2] = i+1;
    }

    sort(p, p+n);
    sort(p, p+n/2, cmp);
    sort(p+n/2, p+n, cmp);
    for(ll i=0; i<n/2; i++){
        cout << p[i][2] << " " << p[n-i-1][2] << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}