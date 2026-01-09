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
    double n, k;
    cin>>n>>k;
    cout << ceil(1.0*(n-1)/(k-1))<<endl;
}


     int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
