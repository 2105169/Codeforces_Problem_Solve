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
    ll a, b, c;
    cin>>a>>b>>c;
    if((a+b+c)%2==1){
        cout << -1 << endl;
    }
    else{
        ll sum=a+b+c;
        ll mn=LLONG_MAX, mx=LLONG_MIN;
        if(a<mn)mn=a;
        if(a>mx)mx=a;
        if(b<mn)mn=b;
        if(b>mx)mx=b;
        if(c<mn)mn=c;
        if(c>mx)mx=c;
        ll md=sum-mn-mx;

        ll t=mn+md, ans=0;
        if(t<=mx){
            ans=t;
        }
        else{
            ans=mx;
            for(ll i=2; i<=30; i++){
                if(t-mx==i){
                    ll k=i/2;
                    ans+=k;
                    break;
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

