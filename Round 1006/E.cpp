#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>>n;

    vector<ll> vt;
    ll k=1;
    while(true){
        if(n==0)break;
        ll t = (k*(k+1))/2;
        if(t==n){
            vt.push_back(k);
            break;
        }
        else if(t<n){
            k++;
        }
        else{
            vt.push_back(k-1);
            n -= (((k-1)*k)/2);
            k = 1;
        }
    }
    
    vector<ll> x;
    
    for(ll i=0; i<vt.size(); i++){
        for(ll j=0; j<=vt[i]; j++){
            x.push_back(i+1);
        }
    }
    x.push_back(1000);
    cout << x.size() << endl;
    for(ll i=0; i<x.size(); i++){
        cout << x[i] << " " << i+1 << endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}