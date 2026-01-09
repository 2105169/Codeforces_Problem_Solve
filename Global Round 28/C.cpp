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
    ll x = 0;
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='1')x++;
        else break;
    }
    if(x==s.size()){
        cout << 1 << " " << s.size() << " "<< x << " " << x << endl;
    }
    else{
        cout << 1 << " " << s.size() << " ";
        ll t = 0;
        for(ll i=x; i<s.size(); i++){
            if(s[i]=='0')t++;
            else{
                break;
            }
        }
        if(t<=x){
            cout << x-t+1 << " " << s.size() - t << endl;
        }
        else{
            cout << 1 << " " << s.size() - x << endl;
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}