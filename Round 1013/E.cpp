#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long




int main()
{
    
    vector<ll> vt(1e7+1);

    for(ll i=2; i<=1e7; i++){
        if(vt[i]==0){
            for(ll j=i; j<=1e7; j+= i){
                vt[j]++;
            }
        }
    }

    vt[0] = 0;
    vt[1] = 0;
    for(ll i=2; i<1e7+1; i++){
        vt[i] = vt[i] + vt[i-1];
    }

    
    int t;cin>>t;while(t--){
        ll n;
        cin>>n;
        cout << vt[n] << endl;
    }
}