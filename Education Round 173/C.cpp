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
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];

    ll in = -1;
    for(ll i=1; i<=n; i++){
        if(a[i] != -1 && a[i] != 1){
            in = i;
            break;
        }
    }

    map<ll, ll> mp;
    vector<ll> ans;
    ans.push_back(0);
    mp[0]++;

    if(in==-1){

        ll mn = 0, mn2 = 0, mx = 0, mx2 = 0;
        for(ll i=1; i<=n; i++){
            mn+= a[i];
            if(mn>0)mn =0;
            mx += a[i];
            if(mx<0)mx = 0;

            mx2 = max(mx2, mx);
            mn2 = min(mn2, mn);
        }

        for(ll i=0; i<=mx2; i++){
            if(mp[i]==0){
                mp[i]++;
                ans.push_back(i);
            }
        }

        for(ll i=0; i>=mn2; i--){
            if(mp[i]==0){
                mp[i]++;
                ans.push_back(i);
            }
        }

    }
    else{
        ll mx = 0, sum = 0, mn = 0;
        for(ll i=in+1; i<=n; i++){
            sum+=a[i];
            mx = max(mx, sum);
            mn = min(mn, sum);
        }

        ll mxx = mx, mnn = mn;
        mx = 0, mn = 0, sum = 0;

        for(ll i=in-1; i>=1; i--){
            sum += a[i];
            mx = max(sum, mx);
            mn = min(mn, sum);
        }
        mxx += mx;
        mnn += mn;

        
        
        for(ll i = a[in]; i<= a[in] + mxx; i++){
            if(mp[i] == 0){
                mp[i]++;
                ans.push_back(i);
            }
        }

        for(ll i=a[in]; i>= a[in] + mnn; i--){
            if(mp[i]==0){
                mp[i]++;
                ans.push_back(i);
            }
        } 

        mx = 0, mn = 0, sum = 0;
        ll mx2 = 0, mn2 = 0;
        for(ll i=1; i<in; i++){
            mx += a[i];
            if(mx<0)mx=0;
            mx2 = max(mx2, mx);

            mn += a[i];
            if(mn>0)mn = 0;

            mn2 = min(mn2, mn);
        }

        

        for(ll i=0; i<=mx2; i++){
            if(mp[i]==0){
                mp[i]++;
                ans.push_back(i);
            }
        }

        
        for(ll i=0; i>=mn2; i--){
            if(mp[i]==0){
                mp[i]++;
                ans.push_back(i);
            }
        }
        
        mx = 0, mn = 0, mx2 = 0, mn2 =0;
        
        for(ll i=in+1; i<=n; i++){
            mx += a[i];
            if(mx<0)mx = 0;
            mx2 = max(mx2, mx);
            mn += a[i];
            if(mn>0)mn = 0;
            mn2 = min(mn2, mn);

        }

        

        for(ll i=0; i<=mx2; i++){
            if(mp[i]==0){
                mp[i]++;
                ans.push_back(i);
            }
        }

        for(ll i=0; i>=mn2; i--){
            if(mp[i]==0){
                mp[i]++;
                ans.push_back(i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(ll i=0; i<ans.size(); i++)cout << ans[i] << " ";
    cout <<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}