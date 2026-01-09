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
    string s;
    cin>>s;
    ll n=s.size();
    if(n==3){
        if(s[0]=='1' && s[1]=='0' && s[2]>'1')cout << "YES\n";
        else cout << "NO\n";
    }
    else if(n>3){
        if(s[0]=='1' && s[1]=='0' && s[2]> '0'){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    else cout << "NO\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
