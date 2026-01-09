#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;

unsigned ll con = 1000000000+7;
void solve()
{
    unsigned ll n;
    cin>>n;
    unsigned ll a[n+1];
    for(ll i = 1; i<=n; i++){
        cin>>a[i];
    }

    vector<ll>ans;
    ans.push_back(a[1]);

    unsigned ll sum = 0, sum2 = a[1];
    unsigned ll time = 0;
    unsigned ll t = a[1];

    while (t%2==0)
    {
        time++;
        t = t /2;
    }
     a[1] = t;
     sum+=a[1];


    for(ll i=2; i<=n; i++){
        unsigned ll x = sum2 + a[i];

        unsigned ll f = a[i];
        unsigned ll g = pow(2, time);

        if(sum + f*g >= x){

            sum2 = (sum + f*g);
            ll y = (sum + f*g)%con;

            ans.push_back(y);
        }
        else{

            sum2 = x;
            x = x % con;
            ans.push_back(x);
        }
        unsigned ll w = a[i];
        while (w%2==0)
        {
            time++;
            w = w / 2;
        }
        a[i] = w;
        sum += a[i];
    }

    for(ll i=0; i<ans.size(); i++)cout << ans[i] << " ";
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
