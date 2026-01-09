#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll a, b, x, y;
    cin>>a>>b>>x>>y;
    if(a==b)cout << 0 << endl;
    else if(a>b+1)cout << -1 << endl;
    else if(a-b==1){
        if(a%2==1)cout << y << endl;
        else cout << -1 << endl;
    }else{
        if(x<=y){
            cout << x*(b-a) << endl;
        }
        else{
            ll ans=0;
            for(ll i=a; i<b; i++){
                if(i%2==0){
                    ans += y;
                }
                else ans += x;
            }
            cout << ans << endl;
        }
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}