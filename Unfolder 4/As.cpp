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
    ll k;
    cin>>k;
    ll t = sqrt(k);
    k += t;

    ll t2 = sqrt(k);
    if(t2!= t)k++;
    cout << k << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}



