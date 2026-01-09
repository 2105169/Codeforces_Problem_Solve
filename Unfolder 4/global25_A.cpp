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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll t=0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='1')t++;
    }
    if(t%2==1)cout << "NO\n";
    else
    {
        if(t==2)
        {
            ll x, y;
            for(ll i=0; i<n; i++)
            {
                if(s[i]=='1')
                {
                    x=i;
                    break;
                }
            }
            for(ll i=n-1; i>=0; i--)
            {
                if(s[i]=='1')
                {
                    y=i;
                    break;
                }
            }
            if(y-x==1)cout << "NO\n";
            else cout << "YES\n";
        }
        else{
            cout << "YES\n";
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

