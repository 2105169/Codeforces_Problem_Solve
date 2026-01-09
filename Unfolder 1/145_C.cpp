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
    ll n, k;
    cin>>n>>k;
    ll a[32];
    for(ll i=0; i<32; i++)
    {
        a[i] = (i*(i+1))/2;
    }

    ll f;
    for(ll i=0; i<=n; i++)
    {
        if(k>=a[i] && k<a[i+1])
        {
            f = i;
            break;
        }
    }

    ll ans[n];
    for(ll i=0; i<f; i++)
    {
        ans[i] = 2;
    }

    ll extra =k-(f*(f+1))/2;
    ll cn = -1000;


    for(ll i=1; i<=n; i++){
        if(i == f+1){
            if(extra == 0){
                cout << cn << " ";
            }
            else cout << -((f-extra+1)*2-1) << " ";
        }
        else if(i<=f) cout << 2 << " ";
        else cout << cn << " ";
    }
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
