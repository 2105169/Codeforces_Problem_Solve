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
    ll mx=0;


    for(int i=0; i<5; i++){
        ll mn=min(a, min(b,c));
        if(mn==a)a++;
        else if(mn==b)b++;
        else c++;
    }
    cout << a*b*c<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
