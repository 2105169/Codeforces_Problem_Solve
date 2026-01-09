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
    ll n, a, b;
    cin>>n>>a>>b;
    ll ans=0;
    if(a==1)
    {
        if((n-1)%b==0)cout<< "YES\n";
        else cout << "NO\n";
    }
    else
    {
        ll k=1, i=0;
        while(k<=n)
        {

            if(k%b==n%b)
            {
                ans=1;
                break;
            }
            k = k*a;
        }


        if(ans==1)cout << "YES\n";
        else cout << "NO\n";
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

