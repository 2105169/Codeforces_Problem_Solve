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
    ll n, m, k;
    cin>>n>>m>>k;

   if(n>=k+1){
    n=k;
   }
   if(m>=k+1){
    m=k;
   }
   cout << n*m << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
