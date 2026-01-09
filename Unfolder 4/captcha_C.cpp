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
    ll n, x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];

    sort(a, a+n);


    ll ans = 0, sum =0, j=0;
    for(ll i=n-1; i>=j; i--)
    {
        sum+=a[i];

        if(i==j)
        {
            ans++;
            j++;
        }
        else
        {
            ans++;
            while(j<i)
            {
                if((sum+a[j])<=x)
                {
                    sum+=a[j];
                    j++;
                }
                else
                {
                    sum=0;
                    break;
                }
            }

        }
    }

    ll ans2 = 0;
    sum=0;
    for(ll i=0; i<n; i++){
        if((sum+a[i])<=x){
            sum+=a[i];
        }
        else{
            sum=0;
            sum+=a[i];
            ans2++;
        }
    }
    if(sum>0)ans2++;
    ans = min(ans, ans2);

    cout << ans << endl;
}


int main()
{
    int t;
    t = 1;
    while(t--)solve();
}

