#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long

using namespace std;
 
void solve()
{
    ll n, k;
    cin>>n>>k;
    if(pow(2LL, n-1)<k){
        cout << -1 << endl;
        return;
    }
    else{
        deque<ll> ans;
        ans.push_back(n);
        k--;
        for(ll i=n-1; i>=1; i--){
            if(k%2==0){
                ans.push_front(i);
            }
            else{
                ans.push_back(i);
            }
            k /= 2;
        }
        for(ll i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
 
 
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}