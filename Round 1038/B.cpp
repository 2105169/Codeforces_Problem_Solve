#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    int n;
    cin>>n;
    int a[n], b[n], c[n], d[n];
    ll ans=0;
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        if(a[i]>c[i])ans += (a[i]-c[i]);
    }
    
    
    for(int i=0; i<n; i++){
        if(b[i]>d[i]){
            if(c[i]>a[i])ans += a[i];
            else ans += c[i];
            ans += (b[i]-d[i]);
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}