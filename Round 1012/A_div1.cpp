#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

bool prime(ll n)
{
    if(n<2)return false;
    else if(n == 2)return true;
    else if(n%2 == 0){
        return false;
    }
    else{
        for(ll i=3; i<=sqrt(n); i+=2){
            if(n%i==0)return false;
        }
    }

    return true;
}


void solve()
{
    ll n;
    cin>>n;
    ll r = n/2;
    ll l = r-1;
    ll prm;
    while(true){
        if(prime(r)){
            prm = r;
            //cout << "r: " << r << endl;
            break;
        }
        if(prime(l)){
            prm = l;
            break;
        }
        r++;
        l--;
    }

    r = prm, l = prm-1;
    map<ll,ll> mp;
    while(l>0){
        if(r<=n){
            cout << r << " ";
            mp[r++]++;
        }
        if(l>0){
            cout << l << " ";
            mp[l--]++;
        }
    }

    for(ll i=1; i<=n; i++){
        if(mp[i]==0)cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
