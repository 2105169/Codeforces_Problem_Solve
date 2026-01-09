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
    ll n;
    cin>>n;
    ll x = n;
    if(n%2==0){
        ll v1[32];
        for(ll i=0; i<32; i++){
            if(x&1){
                v1[i] = 1;
            }
            else v1[i] = 0;

            x>>=1;
        }


        ll in = 32;
        for(ll i=31; i>=0; i--){
            if(v1[i]==1){
                in = i;
                break;
            }
        }

        vector<ll> vt;

        for(ll i=in; i>=0; i--){
            vt.push_back(v1[i]);
        }

        ll f = in+1;
        
        ll v2[f]={0}, v3[f]={0}, v4[f]={0}, v5[f] = {0};
        v2[0] = 0;
        for(ll i=1; i<f; i++){
            v2[i] = 1;
        }

        v3[0] = 0;
        v3[f-1] = 0;
        for(ll i=1; i<f-1; i++)v3[i] = 1;
        v4[f-2] = 1;
        v4[f-1] = 1;
        v5[f-2] = 0;
        v5[0] = 1;
        ll a=1, b=3, c=0, d=0, e = n;
        ll k=1;
        for(ll i=f-1; i>=0; i--){

            c += k*v3[i];
            d += k*v2[i];
            k = k*2;
        }
        map<ll, ll> mp;
        mp[a]++;
        mp[b]++;
        mp[c]++;
        mp[d]++;
        mp[e]++;
        if(n==6){
            cout << 7 << endl;
            cout << "2 4 5 1 3 6" << endl;
        }
        else{
        cout << pow(2, f)-1 << endl;
        for(ll i=1; i<=n; i++){
            if(mp[i]==0){
                cout << i << " ";
            }
        }
        cout << a << " " << b << " " << c << " " << d << " " << e<< endl;
        }
    }
    else{
        cout << n << endl;
        ll v[32]={0};
        ll x = n;
        for(ll i=0; i<32; i++){
            if(x&1)v[i] = 1;
            else v[i] = 0;

            x>>=1;
        }
        ll in = 32;
        for(ll i=31; i>=0; i--){
            if(v[i]==1){
                in = i;
                break;
            }
        }
        
        ll f=in+1;

        v[0] = 0;
        ll a = n, b = n-1, c = 3, d = 1;
        map<ll, ll>mp;
        mp[a]++;
        mp[b]++;
        mp[c]++;
        mp[d]++;
        for(ll i=1; i<=n; i++){
            if(mp[i]==0)cout << i << " ";
        }
        cout << d << " " << c << " " << b << " " << a << endl;

    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
