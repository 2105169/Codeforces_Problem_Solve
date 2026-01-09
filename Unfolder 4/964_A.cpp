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
    int n;
    cin>>n;
    int x=n%10;
    int r=n/10;
    cout << x+r << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
