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
    ll n = s.size();
    if(n==1)cout << -1 << endl;
    else if(n==2){
        if(s[0]==s[1])cout << s << endl;
        else cout << -1 << endl;
    }
    else{
        ll f=0;
        for(ll i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                cout << s[i] << s[i+1] << endl;
                f = 1;
                break;
            }
        }

        if(f==0){
            for(ll i=0; i<n-2; i++){
                if(s[i] != s[i+2]){
                    cout << s[i] << s[i+1] << s[i+2] << endl;
                    f = 1;
                    break;
                }
            }
        }
        if(f==0){
            cout << -1 << endl;
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}