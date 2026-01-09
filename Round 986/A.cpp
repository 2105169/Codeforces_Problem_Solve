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
    ll n, a, b;
    cin>>n>>a>>b;
    ll c[200][200]={0};
    c[a][b] = 1;
    ll l = 0, r=0;
    ll t = 0, f =0;
    ll k=0;
    string s;
    cin>>s;
    while(t<200){
        t++;
        k = k % n;
        if(l==a && r == b){
            f++;
        }
        if(s[k]=='N'){
            r++;
        }
        else if(s[k]=='E'){
            l++;
        }
        else if(s[k]=='W'){
            l--;
        }
        else{
            r--;
        }
        k++;
    }
    if(f>0)cout << "YES\n";
    else cout << "NO\n";

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}