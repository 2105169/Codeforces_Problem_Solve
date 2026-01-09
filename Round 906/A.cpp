#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string s;
    ll n;
    cin>>n;
    cin>>s;
    
    ll z=0, o=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='0')z++;
        else o++;
    }
    vector<ll> vt;

    if(z!=o)cout << -1 << endl;
    else{
        for(ll i=0, j=n-1; i<j; ){
            if(s[i]==s[j]){
                if(s[i]=='0'){
                    s.insert(j+1, "01");
                    vt.push_back(j+1);
                }
                else{
                    s.insert(i, "01");
                    vt.push_back(i);
                }
                i++;
                j++;
            }
            else{
                i++;
                j--;
            }
        }

        if(vt.size() < 301){
            cout << vt.size() << endl;
            for(ll i=0; i<vt.size(); i++)cout << vt[i] << " ";
            cout << endl;
        }
        else cout << -1 << endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}