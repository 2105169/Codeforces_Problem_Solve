#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long


void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll l=0, r=0;
    for(ll i=0; i<s.size(); i++){
        if(s[i]==')')r++;
        else l++;
    }
    if(l != r)cout << -1 << endl;
    else{
        map<ll, ll> mp;
        vector<char> l, r;
        int one=0, two=0;
        for(ll i=0; i<s.size(); i++){
            if(s[i]=='('){
                if(r.empty()){
                    l.push_back(s[i]);
                    mp[i]++;
                    one++;
                }
                else{
                    r.pop_back();
                    mp[i] = 2;
                    two++;
                }
            }
            else{
                if(l.empty()){
                    r.push_back(s[i]);
                    mp[i] = 2;
                    two++;
                }
                else{
                    l.pop_back();
                    mp[i]++;
                    one++;
                }
            }
        }

        if(one==0){
            cout << 1 << endl;
            for(ll i=0; i<s.size(); i++){
                cout << 1 << " ";
            }
            cout << endl;
        }
        else if(two==0){
            cout << 1 << endl;
            for(ll i=0; i<s.size(); i++)cout << 1 << " ";
            cout << endl;
        }
        else{
            cout << 2 << endl;
            for(ll i=0; i<s.size(); i++)cout << mp[i] << " ";
            cout << endl;
        }
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}