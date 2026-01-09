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
    ll n, m, k;
    cin>>n>>m>>k;
    ll a[n+1];
    a[0]=0;
    for(ll i=1; i<=n; i++)
    {
        char t;
        cin>>t;
        if(t=='L')a[i]=0;
        else if(t=='W')a[i]=1;
        else a[i]=2;
    }

    ll tar=n+1, ans=0;
    ll i=0;
    while(i<=n)
    {
        if(a[i]==0)
        {
            if(i+m>=tar)
            {
                ans=tar;
                break;
            }
            else
            {
                ll f=0;
                for(ll j=i+m; j>i; j--)
                {
                    if(a[j]==0)
                    {
                        i=j;
                        f=1;
                        break;
                    }
                }
                if(f==0)
                {
                    for(ll j=i+m; j>i; j--)
                    {
                        if(a[j]==1)
                        {
                            i=j;
                            f=1;
                            break;
                        }
                    }
                    if(f==0)
                    {
                        ans=-100;
                        break;
                    }
                }

            }
            if(ans==-100)break;

        }
        else if(a[i]==1)
        {
            if(i+1>=tar && k>0)
            {
                ans=tar;
                break;
            }
            else if(k<=0)
            {
                ans=-100;
                break;
            }
            else
            {
                k--;
                i++;
            }
        }
        else
        {
            ans=-100;
            break;
        }

    }

    if(ans==tar)cout << "YES\n";
    else cout << "NO\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
