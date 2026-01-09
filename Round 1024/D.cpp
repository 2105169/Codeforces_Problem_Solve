#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1];
    deque<ll> odd, even;
    map<ll,ll> mp;
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }   

    if(n%2==0){
        for(ll i=1; i<=n; i+=2){
            odd.push_back(a[i]);
            mp[a[i]] = a[i+1];
        }
        sort(odd.begin(), odd.end());
        for(ll i=0; i<odd.size(); i++) cout << odd[i] << " " << mp[odd[i]] << " ";
        cout << endl;
    }
    else{
        for(ll i=1; i<=n; i++){
            if(i%2==0)even.push_back(a[i]);
            else odd.push_back(a[i]);
        }

            sort(even.begin(), even.end());
            sort(odd.begin(), odd.end());

            for(ll i=1; i<=n; i++){
                if(i%2==0){
                    cout << even.front() << " ";
                    even.pop_front();
                }
                else{
                    cout << odd.front() << " ";
                    odd.pop_front();
                }
            }
            cout << endl;
        }
    }

int main()
{
    int t;cin>>t;while(t--)solve();
}