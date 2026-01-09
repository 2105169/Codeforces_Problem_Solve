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
    string s, t;
    cin>>s;
    cin>>t;
    ll j=0;
    for(ll i=0; i<t.size(); i++){
        while(j<s.size()){
            if(t[i]==s[j]){
                j++;
                break;
            }
            else if(s[j]=='?'){
                s[j]=t[i];
                j++;
                break;
            }
            else{
                j++;
            }
        }
    }

    ll r=0, k=0;
    for(ll i=0; i<t.size(); i++){
        while(k<s.size()){
            if(t[i]==s[k]){
                r++;
                k++;
                break;
            }
            else{
                k++;
            }
        }
    }
    if(r<t.size())cout << "NO\n";
    else {
        cout << "YES\n";
        for(ll i=0; i<s.size(); i++){
            if(s[i]=='?')cout << 'a';
            else cout << s[i];
        }
        cout << endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}



