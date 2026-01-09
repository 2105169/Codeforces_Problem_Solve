#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

void solve()
{
    string s;
    cin>>s;
    for(ll i=s.size()-1; i>=0; i--){
        if(s[i]=='p')cout << 'q';
        else if(s[i]=='q')cout << 'p';
        else cout << 'w';
        
    }
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}