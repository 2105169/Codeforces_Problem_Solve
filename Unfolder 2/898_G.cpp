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
    ll sum=0, count = 0, res=1e9;
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='A'){
            sum++;
            count++;
        }
        else{
            res = min(res, count);
            count =0;
        }
    }

    res = min(res, count);
    cout << sum-res << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
