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
    string s, t;
    cin>>s;
    cin>>t;

    ll a[n], b[n];
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='.')a[i]=1;
        else a[i] = 0;
        if(t[i]=='.')b[i]=1;
        else b[i] = 0;
    }

    vector<ll> sm;
    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        sum += (a[i]+b[i]);
        if(a[i]==0 && b[i]==0)
        {
            if(sum>0)
            {
                sm.push_back(sum);
                sum=0;
            }
        }
        else if(a[i]==0 && n-1>i && b[i+1]==0)
        {
            if(sum>0)
            {
                sm.push_back(sum);
                sum=0;
            }
        }
        else if(b[i]==0 && n-1>i && a[i+1]==0)
        {
            if(sum>0)
            {
                sm.push_back(sum);
                sum=0;
            }
        }
    }

    if(sm.size()==1)
    {
        ll ans=0;
        for(ll i=1; i<n-1; i++)
        {
            if(a[i]==1 && b[i-1]==0 && b[i+1]==0)ans++;
            if(b[i]==1 && a[i-1]==0 && a[i+1]==0)ans++;
        }
        cout << ans << endl;
    }
    else if(sm.size()==2)
    {
        ll ans=0, l=0, r=0;
        if(a[0]==1)l++;
        if(b[0]==1)l++;
        r=l;


        for(ll i=1; i<n-1; i++)
        {
            if(a[i]==0)
            {
                if(b[i-1]==1 && b[i]==1)
                {
                    l+=a[i-1];
                    if(l>0)
                        ans++;
                }
                if(b[i]==1 && (b[i+1]==1 || (a[i+1]==1)))
                {
                    l += a[i-1];
                    l += b[i-1];
                    if(l>0)ans++;
                }
                if(b[i+1]==1 && b[i]==1 && (a[i+1]==1 || b[i+2]==1))
                {
                    ans++;
                }
            }


            if(b[i]==0)
            {
                if(a[i-1]==1 && a[i]==1)
                {
                    r+=b[i-1];
                    if(r>0)
                        ans++;
                }
                if(a[i]==1 && (a[i+1]==1 || (b[i+1]==1)))
                {
                    r += b[i-1];
                    r += a[i-1];
                    if(r>0)ans++;
                }
                if(a[i+1]==1 && a[i]==1 && (b[i+1]==1 || a[i+2]==1))
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
