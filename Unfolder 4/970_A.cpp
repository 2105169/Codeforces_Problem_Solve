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
    ll a, b;
    cin>>a>>b;
     b = b %2;
     if(b==1){
        if(a>=2){
            a -= 2;
            if(a%2==0)cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
     }
     else{
        if(a%2==0)cout << "YES\n";
        else cout << "NO\n";
     }



}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
