#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll a[n+1], l=1, r = n;
    
    for(ll i=1; i<=k; i++){
        for(ll j=i; j<=n; j+=k){
            if(i%2){
                a[j] = l++;
            }
            else{
                a[j] = r--;
            }
        }
    }

    for(ll i=1; i<=n; i++)cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}