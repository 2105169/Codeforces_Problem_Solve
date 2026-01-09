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
    ll a1, a2, b1, b2;
    cin>>a1>>a2>>b1>>b2;
    ll ans=0;
    if(a1>b1 && a2>b2)ans++;
    if(a1>b1 && a2==b2)ans++;
    if(a1==b1 && a2>b2)ans++;

    if(a1>b2 && a2>b1)ans++;
    if(a1>b2 && a2==b1)ans++;
    if(a1==b2 && a2>b1)ans++;


    cout << ans*2 << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

