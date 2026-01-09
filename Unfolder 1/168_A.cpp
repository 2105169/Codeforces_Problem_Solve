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
    cout << s[0];
    ll f=0;

    for(ll i=1; i<s.size(); i++){
        if(f==0 && s[i-1]==s[i]){

            char x= (s[i]- 'a'+1)%26 + 'a';
            cout << x ;
            f=1;
        }
        cout << s[i];
    }
    if(f==0){
        char x=(s[s.size()-1]- 'a'+1)%26 + 'a';
        cout << x;
    }
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
