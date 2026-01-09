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
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    ll ans=0;
    ll mid, right=0, left=0;
    if(n%2==1){
        ll m = n/2+1;
        for(ll i=0; i<n; i++){
            if(a[i]==m){
                mid = i;
                break;
            }
        }
        m++;
        for(ll i=mid+1; i<n; i++){
            if(m==a[i]){
                right++;
                m++;
            }
        }
        m = n/2;
        for(ll i=mid-1; i>=0; i--){
            if(m==a[i]){
                left++;
                m--;
            }
        }
        ll x = min(left, right);
        cout << n/2-x << endl;
    }
    else{
        ll m = n/2;
        for(ll i=0; i<n; i++){
            if(m==a[i]){
                mid = i;
                break;
            }
        }
        ll mid1=-1;
        for(ll i=mid; i<n; i++){
            if(m+1 == a[i]){
                mid1 = i;
                break;
            }
        }
        if(mid1==-1){
            cout << n/2 << endl;
        }
        else{
            m--;
            for(ll i=mid; i>=0; i--){
                if(m==a[i]){
                    left++;
                    m--;
                }
            }
            m = n/2;
            m++;
            m++;
            for(ll i=mid1; i<n; i++){
                if(m==a[i]){
                    right++;
                    m++;
                }
            }
            cout << n/2 - min(1+left, 1+right) << endl;
        }
    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

