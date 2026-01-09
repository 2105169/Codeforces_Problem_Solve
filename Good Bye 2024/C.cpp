#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll m = n+1, curr = 1, sum = 0;
    while(n>=k){
        if(n%2==1)sum+=curr;
        curr *= 2;
        n/=2;
    }
    cout << (m*sum)/2 << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}