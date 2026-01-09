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
    int vow=0, cons=0, y=0, ng=0, n=s.size();
    for(int i=0; i<n-1; i++){
        if(s[i]=='N' && s[i+1] == 'G'){
            ng++;
            s[i] = '0';
            s[i+1] = '0';
        }
    }
    for(int i=0; i<n; i++){
        if(s[i] != '0'){
            if(s[i]=='A' || s[i]=='E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                vow++;
            }
            else if(s[i] == 'Y')y++;
            else cons++;
        }
    }

    ll ans=0;
    
    
    if((vow + y)*2<=(ng+cons)){
        ll t = min(ng, 2*(vow+y));
        ll r = 2*(vow+y)-t;
        ans = t*2 + r + vow+y;
    }
    else if((vow+y)*2<=(ng*2+cons)){

    }
    cout << ans << endl;
}


int main()
{
    int t;
    t=1;
    while(t--)solve();
}