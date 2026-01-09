#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;



int main()
{
    ll n;
    cin>>n;
    ll ans;
    if(n==1)ans=3;
    else if(n==2)ans=5;
    else if(n==3)ans=7;
    else if(n==4)ans = 8;
    else
    {
        n -= 4;

        ll d = n/3;
        ll x;
        if(d>0)
            x = 8 + (d)*4;
        else x = 8;

        ll f = n % 3;

        if(f==0)
        {
            ans = x;
        }
        else if(f==1)
        {
            ans = x + 1;
        }
        else
        {
            ans = x+3;
        }
    }
    cout << ans << endl;
}

