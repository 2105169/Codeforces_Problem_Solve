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
    ll l, r;
    cin>>l>>r;
    ll L, R;
    ll ans=0;
    cin>>L>>R;
    if(l==L && R==r){
        ans=r-l;
    }
    if(l<L && r==R){
        ans=R-L+1;
    }
    if(l==L && r<R){
        ans=r-l+1;
    }

    if(r==R && l>L){
        ans=r-l+1;
    }
    if(l==L && R<r){
        ans=R-L+1;
    }
    if(l>L && r<R){
        ans=r-l+2;
    }
    if(l<L && r>R){
        ans=R-L+2;
    }
    if(l<L && r<R && r>=L){
        ans=r-L+2;
    }

    if(L<l && R<r && l<=R){
        ans=R-l+2;
    }

    if(r<L)ans=1;
    if(R<l)ans=1;
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
