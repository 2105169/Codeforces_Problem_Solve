#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    n = 2*n;
    deque<ll> b;
    map<ll,ll> mp;
    
    ll f=0, sx=0, sy=0;
    for(ll i=0; i<n; i++){
        ll d;
        cin>>d;
        b.push_back(d);
        mp[d]++;
    }

    for(ll i=0; i<n; i++){
        if(i%2==0)sx+=b[i];
        else sy += b[i];
    }

    for(ll i=0; i<n; i++){
        ll t = sy - sx ;
        if(mp[t]==0 && t>0){
            b.push_back(t);
            for(ll i=0; i<=n; i++)cout << b[i] << " ";
            cout << endl;
            f=1;
            break;
        }
        else{
            ll r = sx;
            sx = sy;
            sy = r;
            ll e = b[0];
            b.pop_front();
            b.push_back(e);
        }
    }


    if(f==0){
        sort(b.begin(), b.end());
        sx = 0, sy=0;
        deque<ll> x, y;
        ll r = n/2;
        for(ll i=0; i<r; i++)sy += b[i], x.push_back(b[i]);
        for(ll i=r; i<n; i++)sx+=b[i], y.push_back(b[i]);
        
        for(ll i=0; i<r; i++){
            ll m = abs(sx-sy);
            if(mp[m]==0){
                if(sx>sy){
                    cout << m << " ";
                    for(ll i=0; i<r; i++)cout << x[i] <<  " " << y[i] << " ";
                    cout << endl;
                    
                }
                else{
                    cout << m << " ";
                    for(ll i=0; i<r; i++)cout << y[i] << " " << x[i] << " ";
                    cout << endl;
                }
                break;

            }
            else{
                ll s = x.front(), t = y.front();
                sx -= s;
                sy -= t;
                x.pop_front();
                y.pop_front();
                x.push_back(t);
                y.push_back(s);
                sx += t;
                sy += s;
            }

        }
    }

}

int main()
{
    int t;cin>>t;while(t--)solve();
}