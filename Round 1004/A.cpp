#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

void solve()
{
    ll x, y;
    cin>>x>>y;
    ll t = y-x;
    
    if(y>x){
        if(y-x==1)cout << "YES\n";
        else cout << "NO\n";
    }
    else{
        ll f=0;
        while(x>0){
            if(x-8==y){
                f++;
                break;
            }
            else{
                x -= 9;
            }
        }
        if(f==1)cout << "YES\n";
        else cout << "NO\n";
    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}